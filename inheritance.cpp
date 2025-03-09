/*inheritance
BSCIT-01-0156/2024
Lucy Wangari
*/
#include <iostream>
#include <string>
using namespace std;

// Base class: AccountHolder
class AccountHolder {
protected:
    string name;

public:
    AccountHolder(string n = "") : name(n) {} // Constructor with default value
    void setName(string n) { name = n; }
    string getName() { return name; }
};

// Derived class: BankAccount (inherits from AccountHolder)
class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(string n, int accNum, double bal) : AccountHolder(n), accountNumber(accNum), balance(bal) {}
    int getAccountNumber() { return accountNumber; }
    double getBalance() { return balance; }
};

// Derived class: SavingsAccount (inherits from BankAccount)
class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string n, int accNum, double bal, double rate) 
        : BankAccount(n, accNum, bal), interestRate(rate) {}
    
    double getInterestRate() { return interestRate; }
};

int main() {
    // Creating a SavingsAccount object
    SavingsAccount mySavings("Lucy Njunge", 354654, 1000.50, 2.5);
    
    // Displaying account details
    cout << "Account Holder: " << mySavings.getName() << endl;
    cout << "Account Number: " << mySavings.getAccountNumber() << endl;
    cout << "Balance: $" << mySavings.getBalance() << endl;
    cout << "Interest Rate: " << mySavings.getInterestRate() << "%" << endl;
    
    return 0;
}

