#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
protected:
    std::string name;

public:
    virtual std::string getName() const;
};

#endif // ITEM_H

