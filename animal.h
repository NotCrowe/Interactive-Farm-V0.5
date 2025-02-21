#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal{
    protected:
        std::string image;
        std::string name;
    public:
        float posX;
        float posY;

        int sizeX = 100;
        int sizeY = 100;

        Animal(std::string n, std::string i, float pX, float pY);
        std::string printInfo();
        std::string getImage();
        std::string getName();
};

#endif