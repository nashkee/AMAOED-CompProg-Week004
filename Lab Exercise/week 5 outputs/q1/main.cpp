/* ****************************************************************
 * @author: Jonas Adelan
 * @app name: Data, I need Data!
 * @app desc: 1.	Write a program that accepts user’s section, and 
 *                  display them back with the format 
 *                   “*** Section: user’s section ***”.
 * @history:
 *  - <2021/04/04> | Jonas Adelan

 *******************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include <string>

using namespace std;

int main()
 {
    string userSection;
    cout << "What is your section?\t" << endl;
    getline(cin, userSection);
    cout << "*** Section: " << userSection << " ***" << endl;

    _pause();
    return EXIT_SUCCESS;
}