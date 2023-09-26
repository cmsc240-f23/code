class MathOperations {
public:
    // Method to add two integers
    int add(int a, int b) { return a + b; }

    // Works: Method to add three integers
    int add(int a, int b, int c) { return a + b + c; }

    // Works: Method to add two doubles
    double add(double a, double b) { return a + b; }

    // Error: note: previous declaration
    // The return type is NOT considered while differentiating the overloaded methods, 
    // so you cannot create an overloaded method just by changing the return type.
    float add(double a, double b) { return a + b; }
};





