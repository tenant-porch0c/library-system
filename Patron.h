// Patron.h

#ifndef PATRON_H
#define PATRON_H

#include <string>

class Patron {
public:
    Patron(int patronId, const std::string& name);
    void displayInfo() const;

private:
    int patronId;
    std::string name;
};

#endif
