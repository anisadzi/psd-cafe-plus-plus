#pragma once

#include <string>

class Patron {
public:
    Patron(const std::string& name); // Constructor with name parameter

    std::string getName() const;
    void enterCafe();

private:
    std::string name;
};

