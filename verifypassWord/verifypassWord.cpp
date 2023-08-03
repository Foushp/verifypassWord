#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{

    string password;
    bool uc = false;
    bool lc = false;
    bool digit = false;

    cout << "Enter the password: ";
    getline(cin, password);

    if (password.size() < 6) {

        cout << "Your password is less than 6 characters";
    }

    for (int i = 0; i < password.size(); i++) {

        if (isupper(password[i])) {

            uc = true;

        }

    }

    if (!uc) {

        cout << "Your password does not contain an uppercase letter. ";

    }



    for (int i = 0; i < password.size(); i++) {

        if (islower(password[i])) {

            lc = true;

        }

    }

    if (!lc) {

        cout << "Your password does not contain a lowercase letter. ";

    }

    for (int i = 0; i < password.size(); i++) {

        if (isdigit(password[i])) {

            digit = true;

        }

    }

    if (!digit) {

        cout << "Your password does not contain a digit. ";

    }



    return 0;
}
