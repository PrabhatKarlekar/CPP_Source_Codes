#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

   int row,col;
   cout<<"Enter The NO. of rows & col :"<<endl;
   cin>>row>>col;
   int A[row][col];
   cout<<"Enter The Elements : "<<endl;
   for(int i=0;i<row;i++)
   {
       for(int j=0;j<col;j++)
       {
           cout<<"A["<<i<<"]["<<j<<"]="<<flush;
           cin>>A[i][j];
           cout<<endl;
       }
   }
    getch();
   return 0;

}
