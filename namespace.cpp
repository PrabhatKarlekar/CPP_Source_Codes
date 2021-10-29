#include<iostream>

namespace first
{
void fun()
{
    std::cout<<"Hello First. ";
}
};
namespace second
{
void fun()
{
    std::cout<<"Hello Second. ";
}
};

//using namespace first;
int main()
{
    first::fun();
    second::fun();
    return 0;
}
