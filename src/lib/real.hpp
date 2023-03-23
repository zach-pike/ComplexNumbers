#pragma once


#include "types.hpp"

namespace LibCmplxNum {
    class Complex;
    class Imaginary;

    class Real {
    public:
        f64 value;
    
        Real(f64 _v);
        void operator=(const Real& r);

        Complex operator+(const Imaginary& rhs);
        Complex operator^(const Complex& rhs);
    };

    using Re = Real;
}