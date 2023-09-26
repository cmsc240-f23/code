#include <iostream>

class MyClass {
public:
    static int staticVar;
    
    static void modifyStaticVar(int value) {
        staticVar = value;
    }
};

int MyClass::staticVar = 10;

int main() {
    MyClass::modifyStaticVar(20);
    std::cout << MyClass::staticVar << std::endl; // Outputs 20
}
