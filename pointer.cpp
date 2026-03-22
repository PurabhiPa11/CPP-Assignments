#include<iostream>
using namespace std;

class MyClass {
    int x;
public:
    MyClass(int x) {
        this->x = x;
    }
    void display() {
        cout << "x: " << this->x << endl;
    }
};

int main() {
    MyClass obj(100);
    obj.display();
    return 0;
}
