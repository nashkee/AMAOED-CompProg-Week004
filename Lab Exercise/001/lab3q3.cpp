/* ****************************************************************
 * @author: Jonas Adelan
 * @app name: My First Application
 * @app desc: To Write a program the displays "Hello" in one line,
              and "World" in another line using exactrly 10 COUT statements
 * @history:
 *  - <2021/03/31> | Jonas Adelan
 *      -- initialised integer
 *      -- Created a string Hello using COUT
 *      -- Created 5 string World using COUT Loop 
 *******************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;
int i;
int main()
 {
    cout << "Hello\n";
for (i=0; i<5; i++)    
    cout << "World\n";
 
    _pause();
    return EXIT_SUCCESS;
}
