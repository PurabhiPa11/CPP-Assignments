#include <iostream>
using namespace std;

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

class dog: public animal{
	public:
		dog()
		{
			cout << "dog is an animal\n";
		}
};

int main()
{
	cat obj1;
	dog obj2;
	return 0;
}
