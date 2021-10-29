#include<iostream>
using namespace std;

class complex
{
    private:
        int real;
        float imag;
    public:
        complex(int r, float i);
        friend ostream& operator<<(ostream &os, complex &c);
        friend istream& operator>>(istream &is, complex &c);
        void display();


};
ostream& operator<<(ostream &os, complex &c)
{
    os<<"real = "<<c.real<<endl;
    os<<"imag = "<<c.imag<<endl;
    return os;
}
istream& operator>>(istream &is, complex &c)
{
    cout<<"Real = "<<flush;
    is>>c.real;
    cout<<"Imag = "<<flush;
    is>>c.imag;
    return is;
}
void complex :: display()
{
    cout<<"Real = "<<real<<endl;
    cout<<"imag = "<<imag<<endl;
}
complex :: complex (int r=0,float i=0)
{
    real = r;
    imag = i;
}
int main()
{
    complex c1,c2(5,6);
    cout<<c2;
    c1.display();
    operator<<(cout,c2);
    operator>>(cin,c1);
    cout<<c1;
    return 0;


}