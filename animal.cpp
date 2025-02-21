#include <string>
#include "animal.h"

Animal::Animal(std::string n, std::string i, float pX, float pY) : name(n), image(i), posX(pX), posY(pY){}
std::string Animal::printInfo(){
    return "Animal : " + name;
}
std::string Animal::getImage(){return image;}
std::string Animal::getName(){return name;}