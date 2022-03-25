#include <iostream>

#include "Credentials.cpp"
using namespace std;

int main()
{
    Credentials c;
    int action;

    cout << "Select your action >" << endl;
    cout << "> 1. Login" << endl;
    cout << "> 2. Register" << endl;
    cout << endl;
    cout << "action: ";
    cin >> action;

    if (action == 1)
    {
        c.loginPage();
        main();
    } else
    {
        c.registerPage();
        main();
    }


    return 0;
}