/* ****************************************************************
 * @author: Jonas Adelan
 * @app name: Data, I need Data!
 * @app desc: 2.	Write a program that accepts user’s daily budget
 *                and display the product of the daily budget and itself.
 * @history:
 *  - <2021/04/04> | Jonas Adelan

 *******************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"
#include <iomanip>

using namespace std;

int main()
{
    double budget; 
    cout << "Enter your Daily Budget:  ";
         while (!(cin >> budget))
            {
              cout << "Invalid Entry, Try Again..\nEnter your Daily Budget: " ;
              cin.clear();
              cin.ignore(1000, '\n'); 
            }          
    cout << "Your new Daily Budget is " << budget * budget << endl; 
    
    _pause();
    return EXIT_SUCCESS;
}
