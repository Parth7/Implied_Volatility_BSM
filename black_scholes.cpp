//
// Created by Parth Parakh on 06/12/20.
//

#include"black_scholes.h"
#include"bs_prices.h"

BlackScholes::BlackScholes(double S_, double K_, double r_, double t_) : S(S_), K(K_), r(r_), t(t_) {}
BlackScholes::~BlackScholes(){}

BlackScholesCall::BlackScholesCall(double S_, double K_, double r_, double t_) : BlackScholes(S_,K_,r_,t_) {}
BlackScholesCall::~BlackScholesCall() noexcept {}

double BlackScholesCall::operator()(double sigma) const
{
    return call_price(S,K,r,sigma,t);
}

BlackScholesPut::BlackScholesPut(double S_, double K_, double r_, double t_) : BlackScholes(S_,K_,r_,t_) {}
BlackScholesPut::~BlackScholesPut() noexcept {}

double BlackScholesPut::operator()(double sigma) const
{
    return put_price(S,K,r,sigma,t);
}

