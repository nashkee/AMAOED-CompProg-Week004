#include <string>
#include "_mammal.h"

class DOG : public LeggedMammal{
private:
    string mBreed, mIsRegistered, mSize;
public:
    DOG(const string animal = "", const string fur = "", int legs = 0,
        bool tail = 0, const string breed = "", const string size= "",bool isRegistered= 0)
        : mBreed{breed}, mSize{size}, mIsRegistered{isRegistered}{}
//setters
void setBreed(string breed){
    mBreed = breed;
}
void setSize(string size){
    if (size == "Small" || size =="Medium" || size == "Large" ){
         mSize=size;
    }
    else{
        mSize="Not Determined!!";
    }
}
void setIsRegistered(bool isRegistered){
    if ( isRegistered == true){
        mIsRegistered = "Registered";
    }
    else {
        mIsRegistered = "Not Registered";
    }
}
//getters
string getBreed(){
    return mBreed;
}
string getSize(){
    return mSize;
}
string getIsRegistered(){
     return mIsRegistered;
}
};
