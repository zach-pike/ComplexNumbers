#pragma once

#include "types.hpp"

namespace LibCmplxNum {
    class Complex;
    class Real;

    class Imaginary {
    public:
        f64 value;
    
        Imaginary(f64 _v);
        void operator=(const Imaginary& r);

        Complex operator+(const Real& rhs);
    };

    using Im = Imaginary;
}