class TestClass
{
public:
    TestClass()
    {
        str = new char[1000];
    }
    ~TestClass() { }

private:
    char* str;
};
    
int main() 
{
    TestClass myTestClassArray[1000];

    return 0; 
}


