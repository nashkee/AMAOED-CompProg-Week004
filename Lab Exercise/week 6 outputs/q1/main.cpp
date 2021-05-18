#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() 
{
    int num;
    cout << "Enter a number: " ;
        while (!(cin >> num) ){
            cout << "INVALID ENTRY!!\nEnter a number: " << endl;
            cin.clear();
            cin.ignore(1000, '\n');
       }
        if (num == 0) {
            cout << "Hello World" << endl;
        }
        else if (num == 1) {
            cout << "I am Groot" << endl;
        }
        else if (num == 2) {
            cout << "To the top" << endl;
        }
        else if (num == 3) {
            cout << "Where is the horizon" << endl;
        }
        else if (num == 4) {
            cout << "I do not know" << endl;
        }
        else {
            cout << "Yeah, I will." << endl;
        }
    _pause();
    return EXIT_SUCCESS;
}
