#include<iostream>
using namespace std;

class Complex
{
    int real;
    float imag;
    public:
        Complex(int r=0, float i=0.0)
        {
            real=r;
            imag=i;
        }
        Complex add(Complex &x);
       // Complex operator + (Complex &n);
        void display();
        friend Complex operator+(Complex f1, Complex f2);

};
Complex operator+(Complex f1, Complex f2)
{
    Complex temp;
    temp.real=f1.real+f2.real;
    temp.imag=f1.imag+f2.imag;
    return temp;
}
/*Complex Complex :: add(Complex &x)
{
    Complex temp;
    temp.real=real + x.real;
    temp.imag=imag + x.imag;
    return temp;
}
Complex Complex :: operator + (Complex &n)
{   Complex temp;
    temp.real = real + n.real;
    temp.imag = imag + n.imag;
    return temp;
    
}*/
void Complex :: display()
{
    cout<<"Real = "<<real<<endl;
    cout<<"Imag = "<<imag<<endl;

}
int main()
{
    Complex c1(5,3),c2(8,4),c3;
   c3=c1+c2;
   //c3 = c1.operator +(c2);
   c3.display();
   //c3=c1.add(c2);
   //c3.display();
    return 0;
}

