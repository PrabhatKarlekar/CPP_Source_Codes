#include<iostream>
#include<conio.h>
using namespace std;

int fib(int n)
{
   /* if(n<=1)
        return n;
    return fib(n-2)+fib(n-1);
    */
  int t1=0,t2=1,s;
   while(n>1)
   {
       s=t1+t2;
       t1=t2;
       t2=s;
       n--;
   }
   return s;
   
  
}

int main()
{
    cout<<fib(4);

}