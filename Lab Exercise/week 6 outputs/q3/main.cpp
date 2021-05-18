#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <float.h>
#include <iomanip>
#include "_pause.h"

using namespace std;
int main() 
{
    float numDividend, numDivisor;
    cout << "Enter Dividend : ";  
        while (!(cin >> numDividend)){
            cout << "INVALID ENTRY!!\nEnter Dividend: ";
            cin.clear();
            cin.ignore(1000, '\n');
            }
    cout << "Enter Divisor  : "; 
        while (!( cin >> numDivisor )){
            cout << "INVALID ENTRY!!\nEnter Divisor:  ";
            cin.clear();
            cin.ignore(1000, '\n');
        } 
        if (numDivisor == 0) {
              cout << "Divisor cannot be zero!!\n";
            } 
        else if (numDividend > 1e6f){
            cout << "tDividened is too big!!\n";
            }
        else if (numDividend < 1e-6f){
            cout << " Dividened is too small\n";
            }
        else if (numDivisor > 1e6f){
            cout << "Divisor is too big!!\n";
            }
        else if (numDivisor < 1e-6f){
            cout << "Divisor is too small!!\n";
            }
        else {
            cout << "Quotient is : "<< fixed << setprecision(6) 
                 << numDividend /numDivisor <<  endl;
            }
    _pause();
    return EXIT_SUCCESS;
}
