#include<iostream>


//TODO: we can improve the efficiency by 
//applying the move semantics?
class Complex
{
public:
    Complex() = default;
    
    Complex(double real, double imag)
    : real(real), imag(imag) 
    {}

    //Overload operator + 
    //For adding two complex numbers
    //f+g
    Complex operator+(const Complex& obj)
    {
       Complex temp;
       temp.real = real + obj.real;
       temp.imag = imag + obj.imag;
       return temp;
    }

    void print() {
        std::cout << real << " + i" << imag <<"\n";
    }

private:
    double real, imag;
};

int main()
{
    Complex c1(10.,2.), c2(3.,4.);
    Complex c3 = c1 + c2;
    c3.print();
}