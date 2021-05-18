#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include <limits>

using namespace std;
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55
int fib(int num){
    int y = 1;
    int x = 1;
    int z;
    if(num==0){
        z=0;
    }
    else if(num<=2){
            z=1;
        }
    else {
    for(int i=3; i<=num; i++){
            z = x + y;
            x = y;
            y = z;
        }
    }
    return z;
}
int main() {
    int num;

        cout <<"Enter the nth of Fibonacci Sequence : " ;
        cin >> num;
        while(cin.fail()){
               cout <<"INVALID ENTRY!\n";
               cout <<"Enter the nth of Fibonacci Sequence : ";
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
               cin >> num;
        }
        cout << endl;
        cout <<"The order number "<< num <<" of fibonacci sequence is "<<fib(num)<<".\n\n";
    _pause();
    return EXIT_SUCCESS;
}
