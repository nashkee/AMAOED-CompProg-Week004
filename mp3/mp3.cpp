#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include "_payslip.h"
#include <limits>
#include <iomanip>

using namespace std;

int main(){

string name;
double salary;
int OThours;

PaySlip employee;
cout << "Employee Name   ";
getline(cin, name);
employee.setName(name);
cout <<"Basic Salary : ";
while (!(cin>>salary) || salary < 10000){
    cout <<" Invalid Entry!!\nBasic Salary : ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
employee.setBasicSalary(salary);
cout <<"OverTime Hours : " ;
while (!(cin>>OThours) || OThours < 1){
    cout <<" Invalid Entry!!\nOverTime Hours : ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
employee.setOverTimeHours(OThours);
employee.determinePayGradeAndTaxRate();
employee.computePay();
cout.imbue(locale(cout.getloc(), new comma));
cout<<fixed<<setprecision(2);

cout<<"\nEmployee Name       : "<<employee.getName()<<endl
   <<"Basic Salary        : Php "<<employee.getBasicSalary()<<endl
   <<"Pay Grade           : "<<employee.getPayGrade()<<endl
   <<"No. of Ot Hours     : "<<employee.getOverTimeHours()<<endl
   <<"OT Pay              : Php "<<employee.getOverTimePay()<<endl
   <<"Gross Pay           : Php "<<employee.getGrossPay()<<endl
   <<"WithHolding Tax     : Php "<<employee.getWithHoldingTax()<<endl
   <<"Net Pay             : Php "<<employee.getNetPay()<<endl
   <<endl<<endl;

    _pause();
    return EXIT_SUCCESS;
}
