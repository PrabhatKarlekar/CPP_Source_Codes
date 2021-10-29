#include<iostream>
#include<conio.h>
using namespace std;

int factorial(int n)
{
   /* if (n==0)
        return 1;
    else
       return factorial(n-1)*n;
    */
    int fact=1;
    for ( int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
        
}

int main()
{
    int f=0,n;
    cout<<"Enter The Number : "<<flush;
    cin>>n;
    f=factorial(n);
    cout<<endl<<f<<endl;
    return 0;
    getch();
}