#ifndef NON_COPYABLE_H
#define NON_COPYABLE_H

class NonCopyable 
{
public:
    // Default constructor.
    NonCopyable() { }; 

    // Delete the copy constructor.
    NonCopyable(const NonCopyable&) = delete; 

    // Delete the copy assignment operator.
    NonCopyable& operator=(const NonCopyable&) = delete; 

    // ... other members ...
};

#endif // NON_COPYABLE_H