#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include <limits>
#include <iomanip>
#include <conio.h>

using namespace std;

    int main() {

        int num, x;
        int seatNum[5][7] = {{1, 2, 3, 4, 5, 6, 7},
                            {8, 9, 10, 11, 12, 13, 14},
                            {15, 16, 17, 18, 19, 20, 21},
                            {22, 23, 24, 25, 26, 27, 28},
                            {29, 30, 31, 32, 33, 34, 35}};
        while(true){
            cout << "\n\tSeats Available. \n\n";
            for(int i=0;i<5;i++){
                cout << endl;
            for(int j=0;j<7;j++){
                cout << setw(5);
                cout << seatNum[i][j];
            }
                cout << endl;
            }
            cout << endl;
            cout << "Pick a number seat : ";
        while(!(cin>>num) || (num < 1) || (num > 35)){
            cout << "invalid input!!\n";
            cout << "Pick a number seat : ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        x = num%7;
        if (x == 0){
            x = 6;
        }
        else{
            x=(num%7)-1;
        }
        if(seatNum[(num-1)/7][x] == 0){
            cout<<"Taken Already\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getch();
       }
        else {
            seatNum[(num-1)/7][x] = 0;
            cout<<"SUCCESS!!";
            getch();
        }
        }
    _pause();
    return EXIT_SUCCESS;
    }
