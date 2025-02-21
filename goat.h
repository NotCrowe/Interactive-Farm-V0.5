#include <string>
#include "animal.h"

class Goat:public Animal{
    protected:
        int hornLength;
    public:
        Goat(std::string n, std::string i, float pX, float pY);
        std::string printInfo();
};