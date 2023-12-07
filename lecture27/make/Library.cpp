// Library.cpp - Implementation of the Library class

#include <iostream>
#include "Library.h"

using namespace std;

void Library::addBook(const Book& book) 
{
    books.push_back(book);
}

void Library::showBooks() const 
{
    for (const Book& book : books) 
    {
        cout << book.getTitle() << endl;
    }
}
