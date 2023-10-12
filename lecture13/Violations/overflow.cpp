int main() 
{
    // Dynamically allocate space for 5 integers on the heap
    int* buffer = new int[5]; 

    // This loop will overflow the buffer when i == 5
    for (int i = 0; i <= 5; i++) 
    {
        buffer[i] = i;
    }

    delete[] buffer;  // Free the allocated memory

    return 0;
}
