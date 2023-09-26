

// Pass a copy of the value
int addOne(int x)
{
    // Compute a new value and return it
    return x + 1;
}

// Pass a pointer
void addOne(int* x)
{
    // Dereference pointer and increment the result
    *x = *x + 1;
}

// Pass a reference
void addOne(int& x)
{
    // Increment the value directly using the alternate name 
    x = x + 1;
}





