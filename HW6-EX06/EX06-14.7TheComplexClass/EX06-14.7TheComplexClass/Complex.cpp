#include <sstream>
#include <cstdlib>
#include <iomanip>
#include "Complex.h"


Complex::Complex(){//Default Constructor
	RealA = 0;
	ImaginaryB = 0;
}

Complex::Complex(double a){//Custom real value constructor
	RealA = a;
	ImaginaryB = 0;
}

Complex::Complex(double a, double b){//Custom real and imaginary value
	RealA = a;
	ImaginaryB = b;
}

double Complex::getRealPart() const{//Return the real value
	return RealA;
}

double Complex::getImaginaryPart() const{//Return the imaginary value
	return ImaginaryB;
}

Complex Complex::add(const Complex& C1) const{
	double r = (this->RealA + C1.getRealPart());//Set 'r' equal to the real value of the new imaginary number
	double i = (this->ImaginaryB + C1.getImaginaryPart());//Set 'i' equal to the imaginary value of the new imaginary number
	return Complex(r, i);//Return a new Complex number with the newly found values
}

Complex Complex::subtract(const Complex& C1) const{
	double r = (this->RealA - C1.getRealPart());//Set 'r' equal to the real value of the new imaginary number
	double i = (this->ImaginaryB - C1.getImaginaryPart());//Set 'i' equal to the imaginary value of the new imaginary number
	return Complex(r, i);//Return a new Complex number with the newly found values
}

Complex Complex::multiply(const Complex& C1) const{
	double r = ((this->RealA * C1.getRealPart()) - (this->ImaginaryB * C1.getImaginaryPart()));//Set 'r' equal to the real value of the new imaginary number
	double i = ((this->ImaginaryB * C1.getRealPart()) + (this->RealA * C1.getImaginaryPart()));//Set 'i' equal to the imaginary value of the new imaginary number
	return Complex(r, i);//Return a new Complex number with the newly found values
}

Complex Complex::divide(const Complex& C1) const{
	double r= (((this->RealA * C1.getRealPart()) + (this->ImaginaryB * C1.getImaginaryPart())) / ((C1.getRealPart() * C1.getRealPart()) + (C1.getImaginaryPart() * C1.getImaginaryPart())));//Set 'r' equal to the real value of the new imaginary number
	double i = (((this->ImaginaryB * C1.getRealPart()) - (this->RealA * C1.getImaginaryPart())) / ((C1.getRealPart() * C1.getRealPart()) + (C1.getImaginaryPart() * C1.getImaginaryPart())));//Set 'i' equal to the imaginary value of the new imaginary number
	return Complex(r, i);//Return a new Complex number with the newly found values
}

double Complex::abs() const{
	return (sqrt((this->RealA * this->RealA) + (this->ImaginaryB * this->ImaginaryB)));//Return the value of the absolute value
}

std::string Complex::toString() const{
	std::stringstream numb;
	numb << setprecision(4) << this->RealA;//Read in the real value to the stringstream
	numb << " + ";//Read in the + symbol
	numb << setprecision(4) << this->ImaginaryB;//Read in the imaginary value
	numb << "i";//Read in the i

	return numb.str();//Return the stringstream.str()
}

Complex& Complex::operator+=(const Complex& C1){
	*this = add(C1);//Add C1 to this->Complex object
	return *this;
}

Complex& Complex::operator-=(const Complex& C1){
	*this = subtract(C1);//Subtract C1 to this->Complex object
	return *this;
}

Complex& Complex::operator*=(const Complex& C1){
	*this = multiply(C1);//Multiply C1 to this->Complex object
	return *this;
}

Complex& Complex::operator/=(const Complex& C1){
	*this = divide(C1);//Divide this->Complex object by C1
	return *this;
}

string Complex::operator[](int x){
	stringstream numb;
	if (x == 0)//If 0 is passed
		numb << this->RealA;//Read in the first(real) value
	else if (x == 1){//If 1 is passed
		numb << this->ImaginaryB;//Read in the second(imaginary) value
		numb << "i";
	}
	return numb.str();
	
}

Complex& Complex::operator++(){
	this->RealA++;//Add one to the Real Value
	return *this;
}

Complex& Complex::operator--(){
	this->RealA--;//Subtract one from the real value
	return *this;
}

Complex Complex::operator++(int x){
	Complex temp(RealA, ImaginaryB);//Imcrement the real value after creating an Object with the values before incrementing
	this->RealA++;
	return temp;
}

Complex Complex::operator--(int x){
	Complex temp(RealA, ImaginaryB);//Decrement the real value after creating an Object with the values before decrementing
	this->RealA--;
	return temp;
}

Complex Complex::operator+(){
	return *this;//Nothing changes
}

Complex Complex::operator-(){
	return Complex(-RealA, -ImaginaryB);//Both become negative
}

ostream& operator<<(ostream& out, const Complex& numb){
	out << numb.RealA;//Send out the real value for the passed Complex object
	out << " + ";
	out << numb.ImaginaryB;//Send out the imaginary value for the passed Complex object
	out << "i";
	return out;
}

istream& operator>>(istream& in, Complex& numb){
	cout << "Enter the real part: ";
	in >> numb.RealA;//Read in the real value for the passed Complex object

	cout << "Enter the imaginary part: ";//Read in the real value for the passed Complex object
	in >> numb.ImaginaryB;
	return in;
}





Complex operator+(const Complex& C1, const Complex& C2){//Add the two Complex objects
	return C1.add(C2);//Add the two Complex objects
}

Complex operator-(const Complex& C1, const Complex& C2){
	return C1.subtract(C2);//Subtract the two Complex objects
}

Complex operator*(const Complex& C1, const Complex& C2){
	return C1.multiply(C2);//Multiply the two Complex objects
}

Complex operator/(const Complex& C1, const Complex& C2){
	return C1.divide(C2);//Divide the two Complex objects
}

