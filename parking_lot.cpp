#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int menu, deposit, valor;
    valor = 1000; 

    do {
        cout << "\n(1) DEPOSIT, (2) WITHDRAW, (3) CHECK BALANCE, (4) EXIT\n";
        cin >> menu;

        if (menu == 1) {
            cout << "How much do you want to deposit? ";
            cin >> deposit;
            valor = valor + deposit;
            cout << "Your balance now is: " << valor;
        }
        else if (menu == 2) {
            int withdraw;
            cout << "How much do you want to withdraw? ";
            cin >> withdraw;
            if (withdraw <= valor) {
                valor -= withdraw;
                cout << "Withdrawal successful. New balance: " << valor;
            }
            else {
                cout << "Insufficient funds.";
            }
        }
        else if (menu == 3) {
            cout << "Your current balance is: " << valor;
        }

    } while (menu != 4);

    cout << "Thanks for Banking with us";
    return 0;
}
