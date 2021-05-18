#ifndef _PERSON
#define _PERSON
#include <string>
#include "IPerson.h"

using namespace std;

class Person : public IPerson{
private:
    string m_name, mAddress, mOccupation, mGender;
    int m_age;
public:
    Person(const string name = "", const string address = "",
           const string occupation = "", const string gender = "", int age = 0)
           : m_name { name }, mAddress{address},mOccupation{occupation},
           mGender {gender}, m_age { age }{}

    //getters
    string getName() {
        return m_name;
        }
    string getAddress() {
        return mAddress;
        }
    string getOccupation(){
        return mOccupation;
        }
    string getGender()  {
        return mGender;
        }
    int getAge(){
        return m_age;
        }
    //setters
    void setAge(int age){
        m_age=age;
    }
    void setName(string name){
        m_name=name;
    }
    void setAddress(string address){
        mAddress=address;
    }
    void setOccupation(string occupation){
        mOccupation=occupation;
    }
    void setGender(bool gender){
        if (gender == true){
            mGender="Male";
        }
        else{
            mGender="Female";
        }
    }
};
#endif
