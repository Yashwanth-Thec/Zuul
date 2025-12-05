#ifndef ROOM_H
#define ROOM_H

#include <map>
#include <vector>
#include <cstring>
#include <iostream>
#include "Item.h"

using namespace std;

class Room{
    public:
    Room(const char* newDescription){
        strcpy(description, newDescription);
    }

    const char* getDescription() const{
        return description;
    }

    void setExit(const char* direction, Room* neighbor){
        exits[direction] = neighbor;
    }

    Room* getExit(const char* direction){
        map<string, Room*>::iterator it = exits.find(direction);
        if (it != exits.end()){
            return it->second;
        }
        return NULL;
    }

    void addItem(Item* item){
        items.push_back(item);
    }
    
    bool removeItem(const char* name, Item*& removedItem){
        for(vector<Item*>:iterator it = items.begin(); it != items.end(); ++it){
            if(strcmp((*it)->getName(), name) == 0){
                removedItem = *it;
                items.erase(it);
                return true;
            }
        }
         false;
    }
    vector<Item*>& getItems(){
        return items;
    }
    map<string, Room*>& getExits(){
        return exits;
    }
private:
    char description[200];
    map<string, Room*> exits;
    vector<Item*> items;
};

