#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
    Complex (double,double);
    double sum(double a,double b,double c,double d);
    double sub(double a,double b,double c,double d);
    void setComplex(double,double);

private:
    double realPart;
    double imaginaryPart;
};


#endif // COMPLEX_H_INCLUDED
