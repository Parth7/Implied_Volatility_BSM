//
// Created by Parth Parakh on 06/12/20.
//

#ifndef IMPLIED_VOLATILITY_INTERVAL_BISECTION_H
#define IMPLIED_VOLATILITY_INTERVAL_BISECTION_H

#include<cmath>

template<typename T>
double interval_bisection(double y_target, double m, double n, double epsilon, T g)
{
    double x = 0.5*(m+n);
    double y = g(x);

    while(fabs(y-y_target)>epsilon)
    {
        if(y<y_target)
        {
            m = x;
        }
        if(y>y_target)
        {
            n = x;
        }
        x = 0.5*(m+n);
        y = g(x);
    }
    return x;
}
#endif //IMPLIED_VOLATILITY_INTERVAL_BISECTION_H
