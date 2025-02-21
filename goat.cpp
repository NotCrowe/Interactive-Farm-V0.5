#include <string>
#include "goat.h"

Goat::Goat(std::string n, std::string i, float pX, float pY) : Animal(n, i, pX, pY){}
std::string Goat::printInfo(){
    return (Animal::printInfo() + " Horn length: " + std::to_string(hornLength));
}