#include <iostream>
using namespace std;

class student
{
	public:
		double marks;
		student (double m)
		{
			marks=m;
		}
};

double average_marks(student s1, student s2)
{
	return (s1.marks + s2.marks)/2;
}

int main()
{
	student s1(88.0), s2(55.2);
	int average=average_marks( s1 , s2);
	// pass the objects as arguments
	cout << "average marks = " << average ;
	return 0;
}
