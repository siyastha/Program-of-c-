#include<iostream>
using namespace std;

class Complex
{
private:
int real, imag;
public:
void input()
{
cout << "Enter real and imaginary part: ";
cin >> real >> imag;
}
friend Complex add(Complex, Complex);
void display()
{
cout << real << " + " << imag << "i" << endl;
}
};

Complex add(Complex c1, Complex c2)
{
Complex c3;
c3.real = c1.real + c2.real;
c3.imag = c1.imag + c2.imag;
return c3;
}

int main()
{
Complex c1, c2, c3;
cout << "Enter first complex number: " << endl;
c1.input();
cout << "Enter second complex number: " << endl;
c2.input();
c3 = add(c1, c2);
cout << "Resultant complex number: ";
c3.display();
return 0;
}
