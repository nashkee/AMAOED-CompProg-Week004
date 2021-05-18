#ifndef _MAMMAL
#define _MAMMAL
#include <string>
#include "Imammal.h"

using namespace std;

class LeggedMammal : public IMammal{
    private:
        string mFur, mAnimal;
        int mLegs;
        bool mTail;
    public:
        LeggedMammal(const string animal = "", const string fur = "",
        int legs = 0,bool tail = 0) : mAnimal{animal}, mFur{fur}, mLegs{legs}, mTail{tail}{}
    //setter
    void setAnimal(string animal) {
        mAnimal=animal;
    }
    void setFur(string fur){
        mFur=fur;
    }
    void setLegs(int legs){
        mLegs=legs;
    }
    void setTail(bool tail){
        mTail=tail;
    }
    //getters
    string getAnimal(){
        return mAnimal;
    }
    string getFur(){
        return mFur;
    }
    int getLegs(){
        return mLegs;
    }
    bool getTail(){
        return mTail;
    }
};
#endif
