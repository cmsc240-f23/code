// main.cpp - Main function for the Library Management System
// TEST

#include "Library.h"

int main() 
{
    Library library;
    library.addBook(Book("1984"));
    library.addBook(Book("Brave New World"));

    library.showBooks();
    return 0;
}
