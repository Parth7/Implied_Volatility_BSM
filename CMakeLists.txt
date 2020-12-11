cmake_minimum_required(VERSION 3.17)
project(Implied_Volatility)

set(CMAKE_CXX_STANDARD 14)

add_executable(Implied_Volatility main.cpp bs_prices.h black_scholes.h black_scholes.cpp interval_bisection.h)