#ifndef _IMAMMAL
#define _IMAMMAL
#include <string>

using namespace std;

class IMammal{

    public:
    //getters
    virtual string getAnimal() = 0;
    virtual string getFur() = 0;
    virtual int getLegs() = 0;
    virtual bool getTail() = 0;
    virtual string getBreed() = 0;
    virtual string getSize() = 0;
    virtual string getIsRegistered() = 0;
};
#endif
