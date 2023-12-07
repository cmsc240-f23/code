// Library.h - Header file for the Library class

#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "Book.h"

class Library 
{
public:
    void addBook(const Book& book);
    void showBooks() const;
private:
    std::vector<Book> books;
};

#endif // LIBRARY_H