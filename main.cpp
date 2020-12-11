#ifndef __MAIN_CPP
#define __MAIN_CPP

#include "black_scholes.h"
#include "interval_bisection.h"
#include <iostream>

using namespace std;

int main()
{
    double S = 100.0;
    double K = 100.0;
    double r = 0.05;
    double T = 1.0;
    double C_M = 10.5;

    BlackScholesCall bsc(S, K, r, T);
    BlackScholesPut bsp(S,K,r,T);

    double low_vol = 0.05;
    double high_vol = 0.35;
    double epsilon = 0.001;

    double sigma = interval_bisection(C_M, low_vol, high_vol, epsilon, bsc);

    std::cout << "Implied Vol: " << sigma << endl;
    return 0;
}
#endif