#include"function_calling.h"
#include"login.h"
#include"register_new_user.h"
#include"forgot_password.h"
using namespace std;
forgot_password::forgot_password() {
    int ch;
    system("cls");
    cout << "Search your acoount by :-" << endl;
    cout << "1. Username." << endl;
    cout << "2. Password." << endl;
    cout << "3. Main menu." << endl;
    cout << "Enter your choice:-" << endl;
    cin >> ch;
    if (ch == 1) {
        int ex = 0;
        string search_user, su, sp;
        cout << "Enter your Username you remember:-" << endl;
        cin >> search_user;
        ifstream searchu("database.txt");
        while (searchu >> su >> sp) {
            if (su == search_user) {
                ex = 1;
                break;
            }
        }
        searchu.close();
        if (ex == 1) {
            cout << "Hello " << su << "\n Thank you for using our login page." << endl;
            cout << "Your password is:- " << sp << endl;
            cin.get();
            function_calling::function_calling();
        }
        else {
            cout << "Sorry, Your account not found :|" << endl;
            cin.get();
        }
    }
    else if (ch == 2) {
        int exi = 0;
        string searchpass, su2, sp2;
        cout << "Enter the last password you remember:- " << endl;
        cin >> searchpass;
        ifstream s("database.txt");
        while (s >> su2 >> sp2) {
            if (sp2 == searchpass) {
                exi = 1;
                break;
            }
        }
        s.close();
        if (exi == 1) {
            cout << "Found your account." << endl;
            cout << "Your Username is:- " << su2 << "\nPassword is:- " << su2 << endl;
            cin.get();
            cin.get();
            function_calling::function_calling();

        }
    }
    else {
        function_calling::function_calling();
    }
}