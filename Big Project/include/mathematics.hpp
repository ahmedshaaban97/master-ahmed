#ifndef MATHEMATICS_HPP
#define MATHEMATICS_HPP

#include <cmath> // for std::sqrt

namespace mathematics
{
struct Triangle
{
    double a;
    double b;
    double c;
};

double calculation( double a , double b , char operation )
{
if(operation=='+')
return a+b;

if(operation=='-')
return a-b;

if(operation=='*')
return a*b;

if(operation=='/')
return a/b;
}

double heron(double a, double b , double c){

float s;
s=  (a+b+c)/2;

double A;
A= sqrt(s*(s-a)*(s-b)*(s-c));
return A;

}

double heron(Triangle t){

float s;
s=  (t.a+t.b+t.c)/2;

double A;
A= sqrt(s*(s-t.a)*(s-t.b)*(s-t.c));
return A;

}



}

#endif // MATHEMATICS_HPP
