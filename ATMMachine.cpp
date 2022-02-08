#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Bank
{
  // Private variables used inside class
private:
  string name;
  int accountno;
  char type[10];
  int amount = 0;
  int tot = 0;

  // Public variables
public:
  // Functions to set the person's data
  void setvalues()
  {
    cout << "Enter name: ";
    cin.ignore();

    getline(cin, name);

    cout << "Enter Account Number: ";
    cin >> accountno;
    cout << "Enter the account type: ";
    cin >> type;
    cout << "Enter balance: ";
    cin >> tot;
  }

  // function to display the required data
  void showdata()
  {
    cout << "Name: " << name << endl;
    cout << "Account Number: " << accountno << endl;
    cout << "Account type: " << type << endl;
    cout << "Balance: " << tot << endl;
  }

  // function to deposit the amount in ATM
  void deposit()
  {
    cout << "\nEnter amount to be deposited: ";
    cin >> amount;
  }

  // function to show the balance amount
  void showbal()
  {
    tot = tot + amount;
    cout << "\nTotal Balance is: " << tot;
  }

  // function to withdraw the amount in ATM
  void withdraw()
  {
    int a, avail_balance;
    cout << "\nEnter amount to withdraw: ";
    cin >> a;
    avail_balance = tot - a;
    cout << "\nAvaialbe balance: " << avail_balance << endl;
  }
};

// Driver function
int main()
{
  // object of class
  Bank b;

  int choice;

  // Infinte while loop to choose options everytime
  while (1)
  {
    cout << "\t\t\t\t\t\t-------------------Welcome--------------------" << endl;
    cout << "\t\t\t\t1) Enter name, Account number ,Account type " << endl;
    cout << "\t\t\t\t2) Balance Enquiry " << endl;
    cout << "\t\t\t\t3) Deposite Money " << endl;
    cout << "\t\t\t\t4) Show Total Balance " << endl;
    cout << "\t\t\t\t5) Withdraw Money " << endl;
    cout << "\t\t\t\t6) Exit " << endl;
    cout << "\t\t\t\tEnter Your Choice: ";
    cin >> choice;

    // vcjhoice to select From
    switch (choice)
    {
    case 1:
      b.setvalues();
      break;
    case 2:
      b.showbal();
      break;
    case 3:
      b.deposit();
      break;
    case 4:
      b.showbal();
      break;
    case 5:
      b.withdraw();
      break;
    case 6:
      exit(1);
      break;
    default:
      cout << "\nInvalid Choice" << endl;
    }
  }
}