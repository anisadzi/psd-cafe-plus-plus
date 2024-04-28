// Item.h
#pragma once

#include <string>

class Item {
public:
    virtual std::string getDescription() const = 0;
};
