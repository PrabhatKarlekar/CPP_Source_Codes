#include<iostream>
using namespace std;
auto fun()
{
    return 12+24.36+'a'+'B';
}
int main()
{
    auto x=0;
    x=12+24.36+'A';
    cout<<x<<endl;
    auto a=0;
    a=fun();
    cout<<a<<endl;
    cout<<fun();
    return 0;
}
