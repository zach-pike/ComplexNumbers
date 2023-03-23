#include "real.hpp"
#include "complex.hpp"
#include "imaginary.hpp"
#include "extra.hpp"

#include <cmath>


using namespace LibCmplxNum;

Real::Real(f64 v): value(v) {}

void Real::operator=(const Real& r) {
    this->value = r.value;
}

Complex Real::operator+(const Imaginary& rhs) {
    return Complex(Re(value), rhs);
}

Complex Real::operator^(const Complex& rhs) {
    return exp(Complex(std::log(value) * rhs.real.value, std::log(value) * rhs.imaginary.value));
}