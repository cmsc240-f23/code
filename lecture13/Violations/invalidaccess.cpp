int main() 
{
    // Pointer not pointing to any valid memory location
    int* ptr = nullptr;  

    // Trying to write to an invalid memory location
    *ptr = 5;  

    return 0;
}