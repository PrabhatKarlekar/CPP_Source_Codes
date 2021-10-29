#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

   int row,col;
   cout<<"Enter The NO. of rows & col :"<<endl;
   cin>>row>>col;
   int **p;
   p=new int *[row];
   int r=0;
   while (r!=row)
   {
       p[r]=new int [col];
       r++;
   }
   
   cout<<"Enter The Elements : "<<endl;

   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
           cout<<"p["<<i<<"]["<<j<<"]="<<flush;
           cin>>p[i][j];
           cout<<endl;
       }
   }
   delete []p;
    getch();
   return 0;

}