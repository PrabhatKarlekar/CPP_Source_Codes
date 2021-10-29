#include<iostream>
using namespace std;

class rect
{
    private:
        int len;
        int bre;
    public:
        rect()
        {
            cout<<"in base class constructor :"<<endl;
        }
        rect(int l,int b)
        {
            len=l;
            bre=b;
        }
        void setlen();
        void setbre();
        int getlen();
        int getbre();
        void area();

};
class cuboid : public rect
{
    private:
        int hei;
    public:
        cuboid()
        {
            cout<<"in derived class constructor :"<<endl;
        }
        cuboid(int h)
        {
            hei=h;
        }
        void sethei();
        void vol();
        int gethei();
        friend ostream& operator<< (ostream &os, cuboid c);


};

void rect :: setlen()
{
    cout<<"Enter the Lenght : "<<flush;
    cin>>len;

}
void rect :: setbre()
{
    cout<<"Enter the Breath : "<<flush;
    cin>>bre;
}
void rect :: area()
{
    cout<<len*bre<<endl;
}
int rect :: getbre()
{
    return bre;
}
int rect :: getlen()
{
    return len;
}

void cuboid :: sethei()
{
    cout<<"Enter the Height for cuboid  ";
    cin>>hei;
}
void cuboid :: vol()
{
    setbre();
    setlen();
    cout<<getbre()*getlen()*hei;
}
int cuboid :: gethei()
{
    return hei;
}
ostream& operator<< (ostream &os, cuboid c)
{
    os<<c.hei<<endl;
    os<<c.getlen()<<endl;
    os<<c.getbre()<<endl;
    return os;
}
int main()
{
    rect r1;
    r1.setbre();
    r1.setlen();
    r1.area();
    cuboid c;
    c.sethei();
    c.vol();
    cout<<c;
    return 0;

}