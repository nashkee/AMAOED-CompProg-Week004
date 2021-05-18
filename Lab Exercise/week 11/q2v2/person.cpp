#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include "student.h"

using namespace std;

int main(){
    Student honor;
    honor.setName("Jonas");
    honor.setAge(19);
    honor.setGender(true);
    honor.setAddress("78 Blumentritt St. Tondo Manila");
    honor.setOccupation("Construction Worker");
    honor.setCollege("AMA University");
    honor.setCourse("BS IT");
    honor.setYearLevel(1);

    cout << "\n\tDetails\n"<<endl;
    cout << "Name       : " << honor.getName()<<endl
         << "Age        : " << honor.getAge()<< " years old"<<endl
         << "Gender     : " << honor.getGender()<<endl
         << "Address    : " << honor.getAddress()<<endl
         << "Occupation : " << honor.getOccupation()<<endl
         << "School     : " << honor.getCollege()<< endl
         << "Course     : " << honor.getCourse()<< endl
         << "Year Level : " << honor.getYearLevel()<<endl<<endl;
    _pause();
    return EXIT_SUCCESS;
}
