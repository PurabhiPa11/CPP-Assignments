#include <iostream>
#include <cmath>
using namespace std;

class triangle
 {
 	private:
 		float a,b,c;
	public:
    void input()
    {
    	cout<<"\n enter the first side of the traingle: ";
    	cin>>a;
    	cout<<"\n enter the second side of the traingle: ";
    	cin>>b;
    	cout<<"\n enter the third side of the traingle: ";
    	cin>>c;
	}
	void area()
	{
		float s=(a+b+c)/2;
		float area=sqrt(s*(s-a)*(s-b)*(s-c));
		cout<<"\n area of triangle ="<<area;
    }
 };
 
    int main()
    {
    	triangle t1;
    	t1.input();
    	t1.area();
	}
