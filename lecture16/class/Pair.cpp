#include <iostream>
#include "Pair.h"

template <typename T>
void Pair<T>::set_first(T value) { first = value; }

template <typename T>
void Pair<T>::set_second(T value) { second = value; }

template <typename T>
void Pair<T>::swap() 
{
    T tmp = first;
    first = second;
    second = tmp;
}

template <typename T>
std::ostream& operator<<(std::ostream& out, Pair<T>& p) 
{
    return out << "Pair(" << p.get_first()  << ", " 
                          << p.get_second() << ")";
}

