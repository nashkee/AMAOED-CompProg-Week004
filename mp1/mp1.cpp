#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main()
{
    int yearLevel;
    double rateUnit, numUnit;
    string studentName, studentCourse, yearName;

//USER INPUT
    cout << "Student Name     : ";
    getline(cin, studentName);
    cout << "Program/Course   : ";
    getline(cin, studentCourse);
    cout << "Year Level       : ";
    cin >> yearLevel;
    cout << "No. of Units     : ";
    cin >> numUnit;

//CONDITIONS
    if (yearLevel == 1){
        yearName = "Freshman";
        rateUnit = 1500;
    }
    else if (yearLevel == 2){
             yearName = "Sophomore";
             rateUnit = 1800;
    }
    else if (yearLevel == 3){
            yearName = "Junior";
            rateUnit = 2000;
   }
   else if (yearLevel == 4 || 5){
            yearName = "Senior";
           rateUnit = 2300;
   }
//CALCULATIONS
double tuition = numUnit * rateUnit;
double downpayment = tuition * 0.3;
double balance = tuition - downpayment;

//OUTPUT
    cout << "\tENROLLMENT SLIP" << endl;
    cout << "Student Name    : " << studentName << endl;
    cout << "Year Name       : " << yearName << endl;
    cout << "No. of Units    : " << numUnit << endl;
    cout << "Tuition Fee     : " << tuition << endl;
    cout << "Down Payment    : " << downpayment << endl;
    cout << "Balance         : " << balance << endl;
    cout << " " << endl;


    _pause();
    return EXIT_SUCCESS;
}
