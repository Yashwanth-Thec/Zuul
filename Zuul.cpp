#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int main() {

  //All the rooms
  Room* outside = new Room("You are outside the main entrence of the university.");
  Room* thater = new Room("You are in the lecture theatre.");
  Room* pub = new Room("You are in the campus pub.");
  Room* lab = new Room("You are in the computing lab.");
  Room* office = new Room("You are in the computing admin office.");
  Room* onetwenty = new Room("You are in the coolest place in the world.");
  Room* hospital = new Room("You are in the hospital.");
  Room* school = new Room("You are in the source of education.");
  Room* gunsShop = new Room("You are where power demands resposiblity.");
  Room* court = new Room("You are where justice is served with integrity.");
  Room* bestBuy = new Room("You are where the future rests on the shelves.");
  Room* area51 = new Room("You are in the home of things you're not meant to understand.");
  Room* cemetary = new Room("You are in the sanctuary that carries the echos of yesterday.");
  Room* gym = new Room("You are where every rep write a new chapter of who you become.");

  //Items
  Item* computer = new item("This contains all that there is to know abot whatever it that you want to know.");
  Item* robot = new item("This is the future built by man-kind leading to the destruction of man-kind");
  Item* popcorn = new item("With every pop the room echos the sound of delight and makes your taste buds rethink divinty.");
  Item* book = new item("Contians not only the knowledge of the universe but also the crying echo of every last tress cut to construct it.");
  Item* gun = new item("The power to save your life and take anothers both in one");
  Item* speaker = new item("Intricet design epmloying various physics findings to produce sound heard no only to you but everyone around you");
  Item* Alien = new item("What many hope to find in the vast ocean of the universe but also what many fear for it unknown powers.");
  Item* drugs = new item("Upon consumption reatlity fails to feel real, this is what runs the underworld.");


  //setting all the exits
  outside->setExit("east", theater);
  outside->setExit("south", lab);
  outside->setExit("west", pub);
  outside->setExit("north", onetwenty);

  theater->setExit("west", outside);
  theater->setExit("east", hospital);

  pub.setExit->setExit("east", outside);

  lab->setExit("east", outside);
  lab->setExit("east", office);

  office->setExit("west", lab);
  office->setExit("north", pub);

  onetwenty->setExit("south", outside);

  hospital->setExit("west", theater);
  hospital->setExit("east", court);
  hospital->setExit("north", school);

  school->setExit("south", hospital);
  school->setExit("north", gunShop);

  gunShop->setExit("south", school);

  court->setExit("west", hospital);
  court->setExit("east", area51);

  jail->setExit("north", court);
  jail->setExit("south", bestbuy);
  jail->setExit("east", cemetary);

  bestbuy->setExit("north", jail);

  area51->setExit("west", court);
  area51->setExit("south", cemetary);

  cemetary->setExit("north", area51);
  cemetary->setExit("west", jail);
  cemetary->setExit("east", gym);

  gym->setExit("west", cemetary);

//initializing the rooms
Room* currentRoom = outside;
vector<Item*> inventory;
bool playing(true);


}
