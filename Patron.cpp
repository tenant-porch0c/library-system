// Patron.cpp

#include "Patron.h"
#include <iostream>

Patron::Patron(int patronId, const std::string& name)
    : patronId(patronId), name(name) {}

void Patron::displayInfo() const {
    std::cout << "Patron ID: " << patronId << std::endl;
    std::cout << "Name: " << name << std::endl;
}
