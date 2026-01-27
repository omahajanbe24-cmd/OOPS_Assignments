#include <iostream>
using namespace std;

class BankAccount{
    private:
    float funds;
    int accountNumber;
    public:
    void setAccountDetails();
    void deposit();
    void withdraw();
    void displayAccount();
};

void BankAccount::setAccountDetails(){
    cout << "Enter the account number : ";
    cin >> accountNumber;
    cout << "Enter the funds : ";
    cin >> funds;
    return;
}

void BankAccount::deposit(){
    float cash;
    cout << "Enter the funds to deposit : ";
    cin >> cash;
    funds += cash;
}

void BankAccount::withdraw(){
    float cash;
    cout << "Enter the funds to deposit : ";
    cin >> cash;
    funds -= cash;
}

void BankAccount::displayAccount(){
    cout << "Account number : " << accountNumber << endl << "Funds : " << funds << endl;
}

int main(){
    BankAccount one;

    one.setAccountDetails();
    one.deposit();
    one.withdraw();
    one.displayAccount();
    return 0;
}