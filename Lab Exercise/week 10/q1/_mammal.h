//Write a class that will represent a LeggedMammal.
//Consider the number of legs, kind of fur, presence of tail.
#include <string>
#include <sstream>

using namespace std;

class LeggedMammal {
    private:
        string mFur, mAnimal;
        int mLegs;
        bool mTail;

    public:
        LeggedMammal(string animal, string fur, int legs, bool tail){
                mAnimal = animal;
                mFur = fur;
                mLegs = legs;
                mTail = tail;
        }

    string getLeggedMammal() {
        ostringstream s;
        s << "Animal      :" << mAnimal << endl;
        s << "No. of Legs :" << mLegs << endl;
        s << "Kind of Fur :" << mFur << endl;
        s << "Has tail?   :" << mTail;
        return s.str();
    }
};
