#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include "_pause.h"
#include <limits>

using namespace std;

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
	
	for(int i = 0; i < n ; i++){
		for(int j = 0; j < n - i - 1; j++){
			cout << " ";
		}
		for(int k = 0; k < i + 1; k++){
			cout << "*";
	    }
			cout << endl;
	}
    _pause();
    return EXIT_SUCCESS;
}
