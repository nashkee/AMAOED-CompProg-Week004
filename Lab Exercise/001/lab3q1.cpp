/* ****************************************************************
 * @author: Jonas Adelan
 * @app name: My First Application
 * @app desc: To Write a program the displays "Hello" in one line,
              and "World" in another line using exactrly two COUT statements
 * @history:
 *  - <2021/03/31> | Jonas Adelan
 *      -- Created a string Hello using COUT
 *      -- Created a string World using COUT
 *******************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main()
 {
    cout << "Hello\n";
    cout << "World\n";
 
    _pause();
    return EXIT_SUCCESS;
}
