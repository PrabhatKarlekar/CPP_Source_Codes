#include<iostream>
#include<math.h>
using namespace std;

class term
{
    public:
        int coef;
        int expo;

    
};
class poly
{
    public:
        int n;
        term *t;
        void create();
        void add(poly p1, poly p2);
        void eval();
        void display();


};
void poly :: create()
{
    cout<<"Enter No. of Terms : "<<flush;
    cin>>n;
    t=new term[n];
    cout<<"enter terms coefficient & expo : "<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<"Enter coefficint for term "<<i+1<<" = "<<flush;
        cin>>t[i].coef;
        cout<<"Enter expo for term "<<i+1<<" = "<<flush;
        cin>>t[i].expo;

    }

}
void poly :: eval()
{
    int x,sum=0;
    cout<<"Enter value of x : "<<flush;
    cin>>x;
    for(int i=0; i<n; i++)
    {
        sum+=t[i].coef*pow(x,t[i].expo);
    }
    cout<<"result of polynomial : "<<sum<<endl;
}
void poly :: add(poly p1, poly p2)
{
    t=new term[p1.n+p2.n];
    int i=0,j=0,k=0;
    while (i<p1.n && j<p2.n)
    {
        if(p1.t[i].expo > p2.t[j].expo)
            t[k++]=p1.t[i++];
        else if (p1.t[i].expo < p2.t[j].expo)
            t[k++]=p2.t[j++];
        else
        {
            t[i].expo=p1.t[i].expo;
            t[k++].coef=p1.t[i++].coef+p2.t[j++].coef;
        }
         
    }
    n=k;
    
}
void poly :: display()
{
    for(int i=0;i<n;i++)
    {
        cout<<t[i].coef<<endl;
        cout<<t[i].expo<<endl;
    }
}
int main()
{
    poly p1;
    p1.create();
   // p1.eval();
    poly p2;
    p2.create();
   // p2.eval();
    poly p3;
    p3.add(p1,p2);
    p3.display();
    p3.eval();
    return 0;
}
