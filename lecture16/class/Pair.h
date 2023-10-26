#ifndef PAIR_H
#define PAIR_H

template <typename T> 
class Pair 
{
public:
    Pair() { };
    T get_first() { return first; }
    T get_second() { return second; }
    void set_first(T value);
    void set_second(T value);
    void swap();
private:
    T first;
    T second;
};

#include "Pair.cpp"

#endif


