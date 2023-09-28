#include <iostream>
using namespace std;

class Parent 
{
public:
    Parent()
    {
        cout << "1. Parent class under construction..." << endl;
    }
    void parentFunctionality() 
    {
        cout << "parentFunctionality() called..." << endl;
    }
private:
    int parentPrivateData = 123;
};
 
class Child : private Parent   // Child inherits from the Parent  
{
public:
    Child()
    {
        cout << "2. Child class under construction..." << endl;
    }
    void childFunctionality() 
    {
        parentFunctionality();
        cout << "childFunctionality() called..." << endl;
        childPrivateData = 20;
        // parentPrivateData = 30;   // Don't have access to parent private data.
    }
private:
    int childPrivateData = 456;
};

class GrandChild : public Child   // GrandChild inherits from the Child and Parent  
{
public:
    GrandChild()
    {
        cout << "3. GrandChild class under construction..." << endl;
    }
    void grandChildFunctionality() 
    {
        cout << "childFunctionality() called..." << endl;
        //parentFunctionality();
        childFunctionality();
        // childPrivateData = 20;
        // parentPrivateData = 30;   // Don't have access to parent private data.
    }
private:
    int grandChildPrivateData = 456;
};

int main()
{
    // Create a new instance of the child class.
    Child childInstance;

    //childInstance.childFunctionality();
    //childInstance.parentFunctionality();

    GrandChild grandChildInstance;
    //grandChildInstance.parentFunctionality();
    //grandChildInstance.childFunctionality();
    //grandChildInstance.grandChildFunctionality();

}