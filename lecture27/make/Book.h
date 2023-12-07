// Book.h - Header file for the Book class

#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book 
{
public:
    Book(const std::string& title);
    std::string getTitle() const;
private:
    std::string title;
};

#endif // BOOK_H