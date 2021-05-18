//Write a class that will represent a Person.
// Consider the name, address, gender, age and occupation.
#include <string>
#include <sstream>

using namespace std;

class Person {
    protected:
        int mAge;
        string mGender;
        string mName, mAddress, mOccupation;
    public:
        void setAge(int);
        void setGender(bool);
        void setName(string);
        void setAddress(string);
        void setOccupation(string);

        int getAge();
        string getGender();
        string getName();
        string getAddress();
        string getOccupation();

        string getPerson();
        Person(){}
/*
        Person(string name, string address, string occupation, int age, bool gender){

            mName = name;
            mOccupation = occupation;
            mAddress = address;
            mAge = age;
            mGender = gender;
        }*/
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
void Person::setAge(int age){
    mAge=age;
}
void Person::setGender(bool gender){
    if(gender==true){
        mGender="Male";
    }
    else{
        mGender="Female";
    }
}
void Person::setName(string name){
    mName=name;
}
void Person::setAddress(string address){
    mAddress=address;
}
void Person::setOccupation(string occupation){
    mOccupation=occupation;
}
int Person::getAge(){
    return mAge;
}
string Person::getGender(){
    return mGender;
}
string Person::getName(){
    return mName;
}
string Person::getAddress(){
    return mAddress;
}
string Person::getOccupation(){
    return mOccupation;
}



/*
        void setAge(int);
        void setGender(bool);
        void setName(string);
        void setAddress(string);
        void setOccupation(string);

        int getAge();
        string setGender();
        string setName();
        string setAddress();
        string setOccupation();
*/


class Student : public Person {
    private:
        string mCollege;
        string mCourse;
        int mYearLevel;
    public:
        void setCollege(string);
        void setCourse(string);
        void setYearLevel(int);
        string getCollege();
        string getCourse();
        int getYearLevel();


        Student(string name, string address, string occupation, int age, bool gender){
            setName(name);
            setAddress(address);
            setOccupation(occupation);
            setAge(age);
            setGender(gender);
        }
};
void Student::setCollege(string college){
    mCollege=college;
}
void Student::setCourse(string course){
mCourse=course;
}
void Student::setYearLevel(int yearLevel){
    mYearLevel=yearLevel;
}
string Student::getCollege(){
    return mCollege;
}
string Student::getCourse(){
    return mCourse;
}
int Student::getYearLevel(){
    return mYearLevel;
}


