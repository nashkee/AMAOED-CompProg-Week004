#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() 
{
    int num;
    int num2; 
    cout << "Enter a number: " ;
        while (!(cin >> num) ){
            cout << "INVALID ENTRY!!\nEnter a number: ";
            cin.clear();
            cin.ignore(1000, '\n');
       }
       num2 = num + 1;
       
       switch(num2){

        case 1:  cout << "Hello World\n"; break;
        case 2:  cout << "I am Groot\n"; break; 
        case 3:  cout << "To the top\n"; break; 
        case 4:  cout << "Where is the horizon\n"; break;
        case 5:  cout << "I do not know\n"; break;
        default: cout << "Yeah, I will.\n" ; break;
       }    
        
    _pause();
    return EXIT_SUCCESS;
}
