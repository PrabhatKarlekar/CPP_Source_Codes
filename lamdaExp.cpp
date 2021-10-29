#include<iostream>
using namespace std;
template<typename t>
auto fun(t p)
{
    p();
}
int main()
{
    [](){cout<<"Hello Prabhat.\n";}();
    [](int x, int y){cout<<"Sum = "<<x+y<<endl;}(5,13);
    int a=[](int x, int y)->int{cout<<"Sum = "<<x+y<<endl;}(5,13);
    int a2=[](int x, int y){return x+y;}(5,13);
    cout<<a2;
    int x=7;
    //[](){cout<<x;}();
    [x](){cout<<endl<<x<<endl;}();
    int y=7;
    int z=[x,y](){return x*y;}();
    cout<<z;
    auto v=[&x,&y](){cout<<endl<<x++<<" "<<++y<<endl;};
    fun(v);
    fun(v);
}