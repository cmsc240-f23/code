#include <iostream>
using namespace std;

int main(void) 
{
for (int number = 1; number < 100; number++)
{
if (number % 3 == 0 && number % 5 == 0){
cout << "FizzBuzz ";
}
else if (number % 3 == 0){ 
cout << "Fizz ";
}
else if (number % 5 == 0){
cout << "Buzz ";
}
else{
cout << number << " ";
}
}
cout << endl;
return 0;
}

