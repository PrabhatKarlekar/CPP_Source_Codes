#include<iostream>
using namespace std;

class rectangle
{
    private:
        int len;
        int bre;
    public:
        rectangle(int l, int b);
        rectangle();
        rectangle(rectangle &rect);
        int area();
        int per();

};
rectangle::rectangle()
{
    len=25;
    bre=10;
}
rectangle::rectangle(int l, int b)
{
    len=l;
    bre=b;
}
int rectangle :: area()
{
    return len*bre;
}
int rectangle :: per()
{
    return 2*(len+bre);
}
rectangle :: rectangle(rectangle &rect)
{
    len=rect.len;
    bre=rect.bre;
}
int main()
{
    rectangle r1,r2(15,10),r3(r2);
    
    cout<<r1.area()<<endl;
    cout<<r1.per()<<endl;
    rectangle *p;
    p=&r2;
    cout<<endl;
    cout<<r2.area()<<endl;
    cout<<p->area()<<endl;
    cout<<p->per()<<endl;
    cout<<r2.per()<<endl;
    cout<<p<<endl;
    cout<<&r2<<endl;
    cout<<r3.area();
    cout<<r3.per();
    return 0;
}
