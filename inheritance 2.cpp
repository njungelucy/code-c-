/*q2 inheritance
BSCIT-01-0156/2024
Lucy Njunge
*/
#include <iostream>
#include <string>

using namespace std;

// Base class Person
class Person {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

// Derived class LibraryMember
class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;

public:
    // Constructor to initialize all attributes
    LibraryMember(string n, int id, int books) {
        name = n;  // Call base class member
        memberID = id;
        booksBorrowed = books;
    }

    int getMemberID() {
        return memberID;
    }

    int getBooksBorrowed() {
        return booksBorrowed;
    }
};

// Derived class PremiumMember from LibraryMember
class PremiumMember : public LibraryMember {
private:
    double membershipFee;

public:
    // Constructor to initialize all attributes
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books) {
        membershipFee = fee;
    }

    double getMembershipFee() {
        return membershipFee;
    }
};

int main() {
    // Creating a PremiumMember object
    PremiumMember pm("Alice Johnson", 101, 5, 49.99);

    // Displaying details
    cout << "Name: " << pm.getName() << endl;
    cout << "Member ID: " << pm.getMemberID() << endl;
    cout << "Books Borrowed: " << pm.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << pm.getMembershipFee() << endl;

    return 0;
}

