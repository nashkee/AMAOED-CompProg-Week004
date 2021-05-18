#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include <limits>

using namespace std;

int main() {

    int num[6];
    int i, j, temp;

        cout << "\nEnter six numbers to assort : \n\n";
        for( i=0; i < 6; i++){
            cout << "Enter Number "<< i + 1 <<": ";
            cin >> num[i];

            while(cin.fail()){
               cout << "INVALID ENTRY! : \n";
               cout << "Enter Number "<< i + 1 <<": ";
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(), '\n');
               cin >> num[i];
            }
        }
        for(i=0; i < 6; i++){
            for(j=i; j < 6; j++){
                if (num[i] > num[j]){
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
        cout << "\nAssorted numbers are: \n"
             << num[0] << ", " << num[1] << ", "<< num[2]
             << ", "<< num[3]<< ", "<< num[4] <<", "<< num[5]
             << endl<<endl;
    _pause();
    return EXIT_SUCCESS;
}
