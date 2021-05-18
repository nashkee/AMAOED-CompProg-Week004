#include <string>
#include "person.h"

using namespace std;

class Student : public Person{
private:
    int mYearLevel;
    string mCollege, mCourse;
public:
    Student(const string name = "", const string address = "",
                   const string occupation = "", const string gender = "", int age = 0,
                   const string college = "",const string course = "", int yearLevel = 0)
                 : Person{ name, address, occupation, gender, age },
                   mCollege{ college }, mCourse{ course }, mYearLevel{ yearLevel }{}
//setters
    void setCollege(string college ){
       mCollege=college;
    }
    void setCourse(string course){
      mCourse=course;
    }
    void setYearLevel(int yearLevel){
      mYearLevel=yearLevel;
    }
//getter
    int getYearLevel() {
        return mYearLevel;
        }
    string getCollege() {
        return mCollege;
    }
    string getCourse(){
        return mCourse;
    }
};
