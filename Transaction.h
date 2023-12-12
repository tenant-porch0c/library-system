// Transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Book.h"
#include "Patron.h"

class Transaction {
public:
    Transaction(const Book& book, const Patron& patron, const std::string& date);
    void displayInfo() const;

private:
    Book book;
    Patron patron;
    std::string date;
};

#endif
