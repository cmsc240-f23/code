int main() 
{
    // Dynamically allocate an integer and make 'ptr' point to it
    int* ptr = new int[5];  

    // Deallocate the memory
    delete[] ptr;  

    // 'ptr' now becomes a dangling pointer 
    // since it still holds the address of the deallocated memory

    // Accessing memory through a dangling pointer, leading to undefined behavior
    *ptr = 10;  

    return 0;
}
