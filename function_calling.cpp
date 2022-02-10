#include"function_calling.h"
#include"login.h"
#include"register_new_user.h"
#include"forgot_password.h"
using namespace std;
function_calling::function_calling() {
    int choice;
    cout << "___________________________________________" << endl;
    cout << "********Welcome to login system************" << endl;
    cout << "___________________________________________" << endl;
    cout << "1. Login." << endl;
    cout << "2. Register." << endl;
    cout << "3. Forgot Id/Password." << "\n";
    cout << "4. Return." << endl;
    cout << "Enter your choice:-" << endl;
    cin >> choice;
    system("cls");
    if (choice == 1) {
        login::login();
    }
    else if (choice == 2) {
        register_new_user::register_new_user();
    }
    else if (choice == 3) {
        forgot_password::forgot_password();
    }
    else if (choice == 4) {
        cout << "Thanks for using our login page." << endl;
        return;
    }
    else {
        cout << "Please select a valid option." << endl;
        function_calling::function_calling();
    }

}
