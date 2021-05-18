#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include "_pause.h"
#include <limits>

using namespace std;
/* 1.	Write a program using WHILE statement that displays
 a right triangle using asterisks where the height is at the
  left corner of the application. The height will depend on the user input.*/

int main() {
	int n;

	cout << "Enter Height for Triangle : ";
	cin >> n;
	do {
		if (!cin){
			cout << "INVALID ENTRY! : \n";
			cout << "Enter Height for Triangle : ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		    cin >> n;
		}			
	}
	while(cin.fail());
	int i = 0;
	while(i < n ){
		
		int k = 0;
		while (k < i + 1){
			cout << "*";
			k++;
	        }
			cout << endl;
			i++;
	}
    _pause();
    return EXIT_SUCCESS;
}
