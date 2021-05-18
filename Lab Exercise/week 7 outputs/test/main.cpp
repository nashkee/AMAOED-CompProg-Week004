#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include "_pause.h"
#include <limits>

using namespace std;
// 

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
	do {
		
		int j = 0;
		 do {
			      
		cout << i;
		j++;
		}
		while(j < i + 1 );

		int k = n;
		 do {
		cout << " x";
		k--;
		}
		while(k > i );
	cout<< endl;
	i++;
	}
	while(i < n);
	/*

	18_8_8_8_8_8_8_8_8_
	128_8_8_8_8_8_8_8_
    1238_8_8_8_8_8_8_
	12348_8_8_8_8_8_
	123458_8_8_8_8_
	1234568_8_8_8_
	12345678_8_8_
	123456788_8_
	1234567898_

	for(int i = 0; i < n ; i++){
		for(int j = n - 1; j < n + i - 1; j++){
			cout << "*";
		}for(int k = n * 2; k > (i * 2) + 1 ; k--){
            cout << "8";
		}
		
			cout << endl;
	}*/
    _pause();
    return EXIT_SUCCESS;
}
