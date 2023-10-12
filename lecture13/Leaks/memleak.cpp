int main() 
{
    // Dynamically allocate an array of 100 integers
    int* arr = new int[100];  

    // Do something with the array 
    for (int i = 0; i < 100; i++) 
    {
        arr[i] = i;
    }
      
    return 0;
}