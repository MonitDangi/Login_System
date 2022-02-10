#include"function_calling.h"
#include"login.h"
#include"register_new_user.h"
#include"forgot_password.h"
using namespace std;
register_new_user::register_new_user() {
    string register_user, register_pass;
    system("cls");
    cout << "Enter Username:-" << endl;
    cin >> register_user;
    cout << "Enter Password:-" << endl;
    cin >> register_pass;

    ofstream reg("database.txt", ios::app);
    reg << register_user << " " << register_pass << endl;
    system("cls");
    cout << "Registration succesfull." << endl;
    function_calling::function_calling();

}