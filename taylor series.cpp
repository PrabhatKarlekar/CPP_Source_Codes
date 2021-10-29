#include<iostream>
#include<conio.h>
using namespace std;

double taylor(int x, int n)
{   static double p=1,f=1;
    double r;
    if(n==0)
        return 1;

    r=taylor(x,n-1);
    p=p*x;
    f=f*n;
    return (r+p/f);
}

int main()
{
    cout<<"output : - "<<taylor(3,5);
    return 0;
    getch();
}