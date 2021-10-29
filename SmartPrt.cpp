#include<iostream>
#include<memory>
using namespace std;
class rect
{
    private:
        int len;
        int bre;
    public:
        rect()
        {
            len=0;
            bre=0;
        }
        int area();
        int peri();

};
int rect :: area()
{
    cout<<"len = "<<flush;
    int l;
    cin>>l;
    cout<<"bre = "<<flush;
    int b;
    cin>>b;
    return l*b;

}
int rect :: peri()
{
    cout<<"len = "<<flush;
    int l;
    cin>>l;
    cout<<"bre = "<<flush;
    int b;
    cin>>b;
    return 2*(l+b);
}
int main()
{
    unique_ptr<rect>ptr(new rect);
    cout<<ptr->area();
    cout<<ptr->peri();
    unique_ptr<rect>ptr1(new rect);
    //ptr1=ptr;
    ptr1=move(ptr);
    cout<<ptr1->area();
    cout<<ptr1->peri();
    shared_ptr<rect>sptr(new rect);
    cout<<sptr->area();
    cout<<sptr->peri();
    shared_ptr<rect>ptr2(new rect);
    ptr2=sptr;
    cout<<ptr2.use_count();
    weak_ptr<rect>ptr3(new rect);
    return 0;

}