#include"function_calling.h"
#include"login.h"
#include"register_new_user.h"
#include"forgot_password.h"
using namespace std;
login::login() {
    int exist;
    string user, pwd, u, p;
    system("cls");
    cout << "Enter Username" << endl;
    cin >> user;
    cout << "Enter Password" << endl;
    cin >> pwd;
    ifstream input("database.txt");
    while (input >> u >> p) {
        if (u == user && p == pwd) {
            exist = 1;
        }
    }
    input.close();
    if (exist == 1) {
        cout << "Hello " << u << "\n Thanks you for using our login page." << endl;
        cin.get();
        function_calling::function_calling();
    }
    else {
        cout << "Sorry, There is some Login error." << endl;
        cin.get();
        cin.get();
        function_calling::function_calling();

    }

}