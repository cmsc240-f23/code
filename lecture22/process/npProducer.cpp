#include <iostream>
#include <fstream>
#include <unistd.h>
using namespace std;

int main() 
{
    ofstream namedPipe("myNamedPipe");

    while (true)
    {
        namedPipe << "Hello from producer!" << endl;
        sleep(5);
    }
    namedPipe.close();
    return 0;
}

// mkfifo myNamedPipe
//  ./npProducer & ./npConsumer &