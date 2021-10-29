#include<iostream>
//#define PI 3.14
using namespace std;
#define co cout
#define MAX(x,y) (x>y?x:y)
#define msg(x) #x
#ifndef PI
    #define PI 3
#endif
int main()
{
    co<<"hello world.\n";
    std::co<<PI<<std::endl;
    std::co<<MAX(3,4)<<std::endl;
    std::co<<msg(Bye World);
}