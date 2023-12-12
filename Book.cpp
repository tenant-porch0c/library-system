// Book.cpp

#include "Book.h"
#include <iostream>

Book::Book(int bookId, const std::string& title, const std::string& author)
    : bookId(bookId), title(title), author(author) {}

void Book::displayInfo() const {
    std::cout << "Book ID: " << bookId << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
}
