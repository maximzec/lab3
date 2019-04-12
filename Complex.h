#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	double re;
	double im;
public:
	void setData(double re, double im);
	void getAbs();
	void printComplex();
};
#endif // !COMPLEX_H
