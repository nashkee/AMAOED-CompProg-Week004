#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include "_pause.h"
#include <limits>

using namespace std; 

int main() {
	int height, space, counter;
	cout << "Enter Height for Triangle : ";
	cin >> height;
	do {
		if (!cin){
			cout << "INVALID ENTRY! : \n";
			cout << "Enter Height for Triangle : ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		    cin >> height;
		}			
	}
	while(cin.fail());
	space = 0;
	do {
		counter = space;
		do{
		if (counter > 0){
		cout << " ";
		}
		counter--;
	    } 
		while (counter > 0);
		
		counter = height;
		do{
		cout << "*" << " ";
		counter--; 
		}
		while (counter > 0);
	cout << endl;
	space++;
	height--;
	} 
	while (height > 0);

    _pause();
    return EXIT_SUCCESS;
}
