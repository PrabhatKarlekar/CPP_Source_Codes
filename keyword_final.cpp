#include<iostream>
using namespace std;

class parent //final
{
    virtual void show() final
    {

    }
};
class child:parent
{
    void show()
    {
        
    }
};