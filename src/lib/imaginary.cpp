#include "imaginary.hpp"

#include "complex.hpp"

using namespace LibCmplxNum;

Imaginary::Imaginary(f64 v): value(v) {}

void Imaginary::operator=(const Imaginary& r) {
    this->value = r.value;
}

Complex Imaginary::operator+(const Real& rhs) {
    return Complex(rhs, Im(value));
}