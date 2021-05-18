#ifndef _IPERSON
#define _IPERSON
#include <string>

using namespace std;

class IPerson{
    public:
    //getters
    virtual int getAge() = 0;
    virtual int getYearLevel() = 0;
    virtual string getName() = 0;
    virtual string getAddress() = 0;
    virtual string getOccupation() = 0;
    virtual string getGender() = 0;
    virtual string getCollege() = 0;
    virtual string getCourse() = 0;
};
#endif
