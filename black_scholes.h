//
// Created by Parth Parakh on 06/12/20.
//

#ifndef IMPLIED_VOLATILITY_BLACK_SCHOLES_H
#define IMPLIED_VOLATILITY_BLACK_SCHOLES_H

class BlackScholes
{
protected:
    double S;
    double K;
    double r;
    double t;
public:
    BlackScholes( double S_,double K_, double r_, double t_);
    virtual ~BlackScholes();
    virtual double operator()(double sigma) const =0;
};

class BlackScholesCall:public BlackScholes
{
public:
    BlackScholesCall(double S_,double K_,double r_, double t_);
    virtual ~BlackScholesCall();
    virtual double operator()(double sigma) const;
};

class BlackScholesPut: public BlackScholes
{
public:
    BlackScholesPut(double S_,double K_, double r_, double t_);
    virtual ~BlackScholesPut();
    virtual double operator()( double sigma) const;
};

#endif //IMPLIED_VOLATILITY_BLACK_SCHOLES_H
