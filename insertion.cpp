#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    cout<<"Enter The Size of Array : "<<flush;
    size_t s;
    cin>>s;
    int A[s];
    int len;
    cout<<"Enter The no. of elements to enter : "<<flush;
    cin>>len;
    cout<<"Enter the elements in array : "<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<"A["<<i<<"] = "<<flush;
        cin>>A[i];

    }
    cout<<"enter the element to insert and index  : ";
    int item,index;
    cin>>item>>index;
    for(int i=len; i>=index ; i--)
    {
        A[i]=A[i-1];
    }
    A[index]=item;
    len++;
    for(int i=0;i<s;i++)
    {
        cout<<"A["<<i<<"] = "<<A[i]<<endl;

    }
    getch();
   return 0;

}