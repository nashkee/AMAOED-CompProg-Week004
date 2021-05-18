//Write a class that will represent a Person.
// Consider the name, address, gender, age and occupation.
#include <string>
#include <sstream>

using namespace std;

class Person {
    public:
        int mAge;
        bool mGender;
        string mName, mAddress, mOccupation;
        string getPerson();

        Person(string name, string address, string occupation, int age, bool gender){

            mName = name;
            mOccupation = occupation;
            mAddress = address;
            mAge = age;
            mGender = gender;
        }
};

string Person::getPerson() {
    ostringstream s;
    s << "Name       : " << mName << endl;
    s << "Address    : " << mAddress << endl;
    s << "Occupation : " << mOccupation << endl;
    s << "Age        : " << mAge << endl;
    s << "Gender     : " << mGender<< endl;
    return s.str();
}
