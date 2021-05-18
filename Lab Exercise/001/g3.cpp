/* ****************************************************************
 * @author: Jonas Adelan
 * @app name: My First Application
 * @app desc: To Write a program the displays "Hello" in one line,
              and "World" in another line using exactrly two COUT statements
 * @history:
 *  - <2021/03/31> | Jonas Adelan
 *      -- Created a string Hello using COUT
 *      -- Created 5 string World using COUT
 *******************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

void str()
{
    cout << "Hello\n";
}

int main()
 { 
    char char_array[] = { 'W', 'o', 'r', 'l', 'd' };
    string j = char_array;
    string word[2]= { "Hello", "World" };
    string a="World";
    string b="Hello"; 
    
    str();
    cout << "World\n";
    
    str();
    cout << "World" << endl;
    
    str();
    cout << j << endl;
    
    str();
    cout << a << endl;
    
    str();
    cout << word[1] << endl;

    _pause();
    return EXIT_SUCCESS;
}
