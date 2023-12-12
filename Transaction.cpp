// Transaction.cpp

#include "Transaction.h"
#include <iostream>

Transaction::Transaction(const Book& book, const Patron& patron, const std::string& date)
    : book(book), patron(patron), date(date) {}

void Transaction::displayInfo() const {
    std::cout << "Transaction Date: " << date << std::endl;
    book.displayInfo();
    patron.displayInfo();
}
