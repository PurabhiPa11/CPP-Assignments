#include <iostream>
using namespace std ;
class students
{
    public:
    char ch[100];
    int r,m;
    ~students()
    {
        cout<<"destructor ";
    }
   void display()
    {
        cout<<"good job";
    }
};
int main()
{
    students t1;
    t1.display();
}
