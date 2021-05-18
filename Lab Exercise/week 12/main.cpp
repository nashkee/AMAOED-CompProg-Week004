//1.Write a program that will display the value and logical address of an integer variable with an initial value of 900.
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(){

int x = 900;


cout << " Value of x is : "<< x <<endl
     << " Logical Address is "<< &x <<endl;
    cin.get();
    return EXIT_SUCCESS;
}
/*
Write a program that will display
the value and logical address of an uninitialized character array with size ten (10) and a
pointer pointing to the array. (Hint: you may need to perform some casting.)*/
