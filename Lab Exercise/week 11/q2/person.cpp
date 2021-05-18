#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include "_person.h"

using namespace std;

int main(){

    Student honor("Jonas Adelan", "32 Blumetritt St. Tondo Manila","Truck Driver", 27, true);
    honor.setCollege("AMA University");
    honor.setCourse("BS IT");
    honor.setYearLevel(1);
    cout<< "\tDetails\n" <<      honor.getPerson()<< endl;
    cout << "School     : " << honor.getCollege()<< endl
         << "Course     : " << honor.getCourse()<< endl
         << "Year Level : " << honor.getYearLevel()<<endl<<endl;

    _pause();
    return EXIT_SUCCESS;
}
