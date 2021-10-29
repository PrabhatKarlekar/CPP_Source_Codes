#include<iostream>
using namespace std;

template <class t>
class rect
{
	private:
		t len,bre;
	public:
		rect(t x, t y);
		rect();
		t area(t a, t b);
};

template <class t>
t rect <t> :: area (t a, t b)
{
	len=a;
	bre=b;
	cout<<"length = "<<len<<"\t breadth = "<<bre<<endl;
	return len*bre;
}
template <class t>
rect <t> :: rect ( t x, t y)
{
	len=x;
	bre=y;
	cout<<"length= "<<len<<"\t breadth = "<<bre<<endl;
}
int main()
{
	rect <int> r(1,1);
    rect <float> r2(9.5,12.5);
	cout<<r2.area(9.5,12.5);
	return 0;
}