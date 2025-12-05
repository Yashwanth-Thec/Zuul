#ifndef ITEM_H
#define ITEM_H

#include <cstring>
#include <iostream>

using namespace std;

class Item {
    public:
    Item(const char* newName = "", const char* newDescription = "") {
        strcpy(name, newName);          
        strcpy(description, newDescription);
    }

    const char* getName() const {
        return name;
    }

    const char* getDescription() const {
        return description;
    }

private:
    char name[30];        //This takes the item name
    char description[200]; // This takes the description 
};

#endif