#pragma once

#include "imaginary.hpp"
#include "real.hpp"

#include <ostream>

namespace LibCmplxNum {
    class Complex {
    public:
        Real real;
        Imaginary imaginary;

        Complex(Real r, Imaginary im);
        ~Complex();

        Complex(Real r);

        // Absoloute value of a complex number
        f64 abs() const;

        // Argument value of complex number
        f64 arg() const;

        Complex operator+(const Complex& rhs);
        Complex operator-(const Complex& rhs);
        Complex operator*(const Complex& rhs);

        Complex operator/(const Real& r);

        Complex ipow(u32 v) const;

        friend std::ostream& operator<<(std::ostream& os, const Complex& v);
    };

    
}