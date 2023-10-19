#include <iostream>
using namespace std;

int main()
{
    // Normal string
    cout << "NORMAL STRING " << endl;
    cout << " Hello\tHello\tHello\nHello\\Hello\\Hello " << endl;

    cout << endl << endl;

    // Raw string
    cout << "RAW STRING: " << endl;
    cout << R"( Hello\tHello\tHello\nHello\\Hello\\Hello )" << endl;

    return 0;
}
