#include<iostream>
#include<conio.h>
using namespace std;

int fact(int f)
{
    int fact=1;int i=0;
    while(f>0)
    {   i++;
        fact=fact*i;
        f--;
    }
    return fact;
}
int ncr(int n,int r)
{
    if(n<=1)
        return 1;
   return fact(n)/(fact(r)*fact(n-1));

}

int main()
{
    cout<<ncr(4,3);
}
