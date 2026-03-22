#include <iostream>
using namespace std;

// base class
class animal{
public:
	animal() 
	{
		cout << "this is an animal\n";
	}
};
class cat : public animal{
	public:
		cat()
		{
			cout << "cat is an animal\n";
		}
};

int main()
{
	cat obj;
	return 0;
}
