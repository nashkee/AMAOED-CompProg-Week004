/* ****************************************************************
 * @author: Jonas Adelan
 * @app name: My First Application
 * @app desc: To Write a program the displays "Hello" in one line,
              and "World" in another line using exactly ten COUT statements
 * @history:
 *  - <2021/03/31> | Jonas Adelan
 
 *******************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main()
 {
    char char_array[] = { 'H', 'e', 'l', 'l', 'o' };
    string j = char_array;
    
    string word[2]= { "Hello", "World" };
    string a="World";
    string b="Hello";
    
    cout << "Hello\n"<< "World\n";
    cout << "Hello" << endl;
    cout << a << endl << b << endl;
    cout << "World\n";
    cout << "Hello\n" << a << endl;
    cout <<  word[0] << endl;
    cout <<  word[1] << endl;
    cout << j << endl;
    cout << a << endl;
    cout << b << endl;

    _pause();
    return EXIT_SUCCESS;
}
