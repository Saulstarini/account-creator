#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Credentials
{
public:
    string username;
    string password;

    vector<string> usernames = {"test"};
    vector<string> passwords = {"test"};

    void registerPage()
    {
        int i;

        cout << "Please enter your new username" << endl;
        cout << "username: ";
        cin >> username;

        cout << "Please enter your new password" << endl;
        cout << "password: ";
        cin >> password;

        //Add username to vector
        usernames.push_back(username);

        //Add password to vector
        passwords.push_back(password);

        for (i = 0; i < 5; i++)
        {
            cout << usernames[i] << endl;
            cout << passwords[i] << endl;
        }
    }

    void loginPage()
    {
        int i, j;

        cout << "Enter your username" << endl;
        cout << "username: ";
        cin >> username;
        
        cout << "Enter your password" << endl;
        cout << "password: ";
        cin >> password;

        for (i = 0; i < 5; i++)
        {
            cout << "Still looking..." << endl;
            if (username == usernames[i])
            {
                cout << "Username found" << endl;
                break;
            }
        }

        for (j = 0; i < 5; i++)
        {
            cout << "Still looking..." << endl;
            if (password == passwords[j])
            {
                cout << "Password found" << endl;
                break;
            }
        }   

        if (username != usernames[i] || password != passwords[j])
        {
            cout << "Some of the credentials have been wrong!" << endl;
            cout << "Please try again" << endl;
        } else if (username == usernames[i] && password == passwords[j])
        {
            cout << "Login successful" << endl;
            cout << endl;
        }
    }
};