#include <string>
#include "animal.h"

class Duck:public Animal{
    protected:
        int featherColor;
    public:
        Duck(std::string n, std::string i, float pX, float pY);
        std::string printInfo();
};