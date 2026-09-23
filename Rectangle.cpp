#include <iostream>
using namespace std;

class Rectangle
{
	private:
	float l,b;
	public:
	void accept()
	{
	cout<<"Enter l:"<<endl;
	cin>>l;
	cout<<"Enter b:"<<endl;
	}
	float area();
	float perimeter();
        void display()
	{
	cout<<"The area is:"<<endl;
	cout<<"The perimeter is:"<<endl;
	}
};
	float Rectangle::area()
	{
		return l*b;
	}
	float Rectangle::perimeter()
	{
		return 2*(l+b);
	}
int main()
{
Rectangle r;
r.accept();
r.display();
return 0;
}
