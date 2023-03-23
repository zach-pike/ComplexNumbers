#include "complex.hpp"
#include "extra.hpp"
#include <cmath>
#include <iostream>

#define PHI 1.61803398875f

int main() {
    using namespace LibCmplxNum;

    auto n = Complex(1.f, 0.f);

    auto a = (Real(PHI) ^ n) - (Real(-1.f / PHI) ^ n);

    std::cout << a << std::endl;

    return 0;
}