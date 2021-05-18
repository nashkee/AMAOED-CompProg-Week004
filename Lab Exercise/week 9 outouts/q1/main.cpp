#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include <limits>

using namespace std;

int quotient(int dividend, int divisor){
    return dividend/divisor;
}

int main() {
    int i;
    int divide[3][2];
        cout << "\nEnter Numbers to divided: \n\n";
        for(i=0;i<3;i++){
            cout << "For Question "<< i + 1<<",\n\n";
            cout << "Enter Dividened: ";
            cin >> divide[i][0];
            while((cin.fail()) || (divide[i][0] < 1)){
               cout << "INVALID ENTRY! : \n";
               cout << "Enter Dividened: ";
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
               cin >> divide[i][0];
            }
            cout << "Enter Divisor: ";
            cin >> divide[i][1];
            while((cin.fail()) || (divide[i][1] < 1)){
               cout << "INVALID ENTRY! : \n";
               cout << "Enter Divisor: ";
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
               cin >> divide[i][1];
            }
            cout << endl;
        }
        for(i=0;i<3;i++){
            cout<<divide[i][0]<<"/"<<divide[i][1]<<" is "
            << quotient(divide[i][0], divide[i][1]) << endl;
        }
    _pause();
    return EXIT_SUCCESS;
}
