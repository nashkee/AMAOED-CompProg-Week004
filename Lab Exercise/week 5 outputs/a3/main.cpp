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
/*3.	Write a program that accepts user’s name, password and address and 
display them back using the format “Hi, I am user’s name. I live at user’s address.”.
*/
int main()
{
    string userName,  userPassword, userAddress;
    

    cout << "Enter your name     : ";
    getline(cin, userName);
    cout << "Enter your password : ";
    getline(cin, userPassword);
    cout << "Enter your address  : ";
    getline(cin, userAddress);
    cout << "" << endl;            
    cout << "Hi, I am " << userName << ". I live at " << userAddress << "." << endl;
    
    _pause();
    return EXIT_SUCCESS;
}
