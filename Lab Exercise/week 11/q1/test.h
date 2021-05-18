#include <string>
#include <sstream>
#include <iostream>

using namespace std;

class LeggedMammal {
   protected:
    //public:
        string mFur;
        string mAnimal;
        int mLegs;
        bool mTail;

    public:

        string getFur();
        string getAnimal();
        int getLegs();
        bool getTail();
        void setAnimal(string);
        void setFur(string);
        void setLegs(int);
        void setTail(bool);
        string getMammal();
        LeggedMammal(){}

       // LeggedMammal(string, string, int, bool);
        //methods
};
/*
LeggedMammal::LeggedMammal(string animal, string fur, int legs , bool tail)
{
    this->mAnimal = animal;
    this->mFur = fur;
    this->mLegs = legs;
    this->mTail = tail;
}
*/
string LeggedMammal::getFur() {
    return mFur;
}
string LeggedMammal::getAnimal() {
   return mAnimal;
}
int LeggedMammal::getLegs() {
    return mLegs;
}
bool LeggedMammal::getTail(){
    return mTail;
}

string LeggedMammal::getMammal(){
  ostringstream s;
        s << "Type of Mammal: " << getAnimal() << endl;
        s << "Type of Fur   : " << getFur() << endl;
        s << "No. of Legs   : " << getLegs() << endl;
        s << "Tail ?        : " << getTail() << endl;
        return s.str();
        }


void LeggedMammal::setAnimal(string animal){
    mAnimal = animal;
}
void LeggedMammal::setFur(string fur){
    mFur=fur;
}
void LeggedMammal::setLegs(int legs){
    mLegs=legs;
}
void LeggedMammal::setTail(bool tail){
    mTail = tail;
}

class Dog : public LeggedMammal
{
        private:
        string mBreed, mIsRegistered, mSize;
        public:
        string getSize();
        string getBreed();
        string getIsRegistered();
        void setSize(string);
        void setBreed(string);
        void setIsRegistered(bool);
        Dog(string animal,  string fur, int legs, bool tail){
            mAnimal=animal;
            mFur=fur;
            mLegs=legs;
            mTail=tail;
        }
 //string animal, string fur, int legs , bool tail
};
string Dog::getBreed(){
    return mBreed;
}
string Dog::getSize(){
    return mSize;
}
string Dog::getIsRegistered(){
     return mIsRegistered;
}
void Dog::setBreed(string breed){
    mBreed = breed;
}
void Dog::setSize(string size){
    if (size == "small" || size =="medium" || size == "large" ){
         mSize=size;
    }
    else{
        mSize="not determined";
    }
}
void Dog::setIsRegistered(bool isRegistered){
    if ( isRegistered == true){
        mIsRegistered = "Registered";
    }
    else{
        mIsRegistered = "not registered";
           }
}


