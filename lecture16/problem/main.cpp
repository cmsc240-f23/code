#include "functions.h"

int main() 
{
    add<int>(3, 4);
    add<long>(3, 4);
    add<float>(3.5, 4.5);
    add<double>(3.5, 4.5);
    return 0;
}