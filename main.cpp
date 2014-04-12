/* 
 * File:   main.cpp
 * Author: lukemonson
 *
 * Created on October 29, 2013, 11:26 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

struct BankAccount{
    
        // variables
    int accountNumber;
    double accountBalance;
    double remainder;
};



int main(int argc, char** argv) {
    BankAccount b;
    BankAccount b2;
    // prompt
    cout << "Please enter 4 digit number for bank account number 1: ";
    cin >> b.accountNumber; // input
    cout << "Please your beginning balance for account number 1: ";
    cin >> b.accountBalance; // input
    
    cout << "Please enter 4 digit number for bank account number 2: ";
    cin >> b2.accountNumber; // input
    cout << "Please your beginning balance for account number 2: ";
    cin >> b2.accountBalance; // input

    b.remainder = b.accountNumber% 5;
    b.accountNumber = b.accountNumber * 10 + b.remainder;
    b2.accountNumber = b2.accountNumber * 10 + b2.remainder;
            
    std::cout << "Your Account #" << b.accountNumber << " has a starting balance of $" << b.accountBalance << endl;
    std::cout << "Your Account #" << b2.accountNumber << " has a starting balance of $" << b2.accountBalance << endl;
        
    return 0;
};

