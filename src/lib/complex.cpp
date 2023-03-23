#include "complex.hpp"

#include <cmath>

using namespace LibCmplxNum;

Complex::Complex(Real r, Imaginary im): real(r), imaginary(im) {}
Complex::Complex(Real r): real(r), imaginary(0.f) {}

Complex::~Complex() {}

f64 Complex::abs() const {
    return std::sqrt(real.value * real.value + imaginary.value * imaginary.value);
}

f64 Complex::arg() const {
    return std::atan(imaginary.value / real.value);
}

Complex Complex::operator+(const Complex& rhs) {
  return Complex(real.value + rhs.real.value, imaginary.value + rhs.imaginary.value);
}

Complex Complex::operator-(const Complex& rhs) {
  return Complex(real.value - rhs.real.value, imaginary.value - rhs.imaginary.value);
}

Complex Complex::operator*(const Complex& rhs) {
  f64 newRe = real.value * rhs.real.value - imaginary.value * rhs.imaginary.value;
  f64 newIm = real.value * rhs.imaginary.value + imaginary.value * rhs.real.value;
  
  return Complex(newRe, newIm);
}

Complex Complex::ipow(u32 v) const {
  if (v == 0) return Complex(1.f, 0.f);
  if (v == 1) return *this;

  auto val = *this;

  for (u32 i=0; i < (v - 1); i++) {
    val = val * (*this);
  }

  return val;
}

Complex Complex::operator/(const Real& r) {
  return Complex(real.value / r.value, imaginary.value / r.value);
}

namespace LibCmplxNum {
  std::ostream& operator<<(std::ostream& os, const Complex& v) {
    os << v.real.value;
    os << "+";
    os << v.imaginary.value;
    os << "i";

    return os;
  }
}