#include<iostream>
using namespace std;
#define co cout
class base
{
private:
    /* data */
public:
    base();
    ~base();
    //virtual ~base();
};

base::base()
{
    co<<"Base Const. "<<endl;
}

base::~base()
{
    co<<"Base Dest. "<<endl;
}
class derived : public base
{
    public:
        derived();
        ~derived();
};
derived ::derived()
{
    co<<"Derived Const. "<<endl;
}
derived ::~derived()
{
    co<<"Derived Dest. "<<endl;
}
int main()
{
   /* base *b;
    derived d;
    b=&d;
    return 0; */
    base *b=new derived;
    delete b;
    return 0;

}