#include <iostream>
#include <string>
using namespace std;

class MyClass

{
	public:
	int MyNum;
	string MyString;
};

int main()
{
	MyClass MyObj;
	MyObj.MyNum = 102411049;
  MyObj.MyString = "FY CSE A";
  
  cout << MyObj.MyNum << "\n"; 
  cout << MyObj.MyString; 
  
}
