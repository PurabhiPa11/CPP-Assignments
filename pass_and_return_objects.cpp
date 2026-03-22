#include<iostream>
using namespace std;

class MyClass {
    int value;
public:
    void setValue(int v) {
        value = v;
    }
    MyClass add(MyClass obj) {
        MyClass temp;
        temp.value = value + obj.value;
        return temp;
    }
    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyClass obj1, obj2, result;
    obj1.setValue(10);
    obj2.setValue(20);
    result = obj1.add(obj2);
    result.show();
    return 0;
}
