#include <string>
#include "duck.h"

Duck::Duck(std::string n, std::string i, float pX, float pY) : Animal(n, i, pX, pY){}
std::string Duck::printInfo(){
    return (Animal::printInfo() + " Feather Color: " + std::to_string(featherColor));
}