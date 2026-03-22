#include <iostream>
using namespace std;

void addition(int x,int y);
int main()
{
int a,b;
cout<<"enter the value of a: ";
cin>>a;
cout<<"enter the value of b: ";
cin>>b;
addition(a,b);
return 0;

}
void addition(int x, int y)
{
	int sum;
	sum= x+y;
	cout<< "the addition of x+y is "<<sum <<" \n " ;
	
	
}
