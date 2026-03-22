#include <iostream>
using namespace std;

class animal{
	public:
		animal()
		{
			cout << "this is an animal\n";
		}
};
class fourlegged{
	public:
		fourlegged()
		{
			cout << "this animal is fourlegged\n";
		}
};
class cat: public animal, public fourlegged{
	public:
		cat()
		{
			cout << "this fourlegged animal is a cat\n";
		}
};
int main()
{
	cat obj;
	return 0;
}
