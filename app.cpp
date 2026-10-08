#include <iostream>
using namespace std;

int main()
{
    double balance = 1000;
    double amount;
    int choice;

    while (choice != 4)
    {
        cout << "\n===== ATM Menu =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Your balance is: " << balance << endl;
            break;

        case 2:
            cout << "Enter deposit amount: ";
            cin >> amount;

            balance = balance + amount;

            cout << "Deposit successful!" << endl;
            cout << "Your new balance is: " << balance << endl;
            break;

        case 3:
            cout << "Enter withdrawal amount: ";
            cin >> amount;

            if (amount <= balance)
            {
                balance = balance - amount;

                cout << "Withdrawal successful!" << endl;
                cout << "Your new balance is: " << balance << endl;
            }
            else
            {
                cout << "Insufficient balance!" << endl;
            }

            break;

        case 4:
            cout << "Thank you for using the ATM!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}