#include "extra.hpp"

#include <cmath>

using namespace LibCmplxNum;

static u64 fact(u64 n) {
   if ((n==0)||(n==1))
    return 1;
   else
    return n * fact(n-1);
}

Complex LibCmplxNum::exp(Complex v) {
    Complex r = Complex(0.f, 0.f);

    for (u64 n=0; n < 20; n++) {
        Complex a = v.ipow(n);
        f64 b = fact(n);

        r = r + Complex(a.real.value / b, a.imaginary.value / b);
    }

    return r;
}