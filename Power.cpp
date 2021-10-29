#include<iostream>
#include<conio.h>
using namespace std;

int power(int m, int n)
{
   /* if(n==0)
        return 1;
    if(n%2==0)
        return power(m*m,n/2);
    return m*power(m*m,(n-1)/2);
    */
   int p=1;
   while ( n!=0)
   {    
       p=p*m;
       n--;
   }
   return p;
}
int main()
{
    int r=power(9,9);
    cout<<r;
    return 0;
    getch();
}