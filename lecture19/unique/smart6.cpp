#include <memory>
using namespace std;

int main() 
{
    unique_ptr<int[]> smartPointer(new int[100]);

    smartPointer[0] = 1;
    smartPointer[1] = 2;
    smartPointer[2] = 3;

    return 0;
}


