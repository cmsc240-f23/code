// Book.cpp - Implementation of the Book class

#include "Book.h"

Book::Book(const std::string& title) : title(title) {}

std::string Book::getTitle() const 
{
    return title;
}
