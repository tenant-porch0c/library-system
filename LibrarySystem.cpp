// LibrarySystem.cpp

#include "Book.h"
#include "Patron.h"
#include "Transaction.h"

int main() {
    // Create books
    Book book1(1, "The Catcher in the Rye", "J.D. Salinger");
    Book book2(2, "To Kill a Mockingbird", "Harper Lee");

    // Create patrons
    Patron patron1(101, "Alice");
    Patron patron2(102, "Bob");

    // Create transactions
    Transaction transaction1(book1, patron1, "2023-01-15");
    Transaction transaction2(book2, patron2, "2023-01-20");

    // Display information
    std::cout << "Transaction Information:" << std::endl;
    transaction1.displayInfo();
    std::cout << std::endl;
    transaction2.displayInfo();

    return 0;
}
