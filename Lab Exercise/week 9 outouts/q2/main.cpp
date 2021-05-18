#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include <limits>

using namespace std;

short first(short num) {
     return num/10;
     }
short second(short num){

    return  num % 10;

    }
int main() {
short num;
   cout << "Enter a two digit number: ";
   cin >>  num;
   while(cin.fail() || (num < 10 || num > 100)) {
               cout << "INVALID ENTRY! : \n";
               cout << "Enter a two digit number: ";
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
               cin >> num;
            }
   cout <<"Digits are: " <<first(num) << " "<< second(num) << endl ;


    _pause();
    return EXIT_SUCCESS;
}
