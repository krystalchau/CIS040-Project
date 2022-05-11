
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/*
Write a program that stores the following data about a customer account using a structure:
	Name
	Address
	City, State, and ZIP
	Telephone Number
	Account Balance
	Date of Last Payment

The structure should be used to store customer account records in a file. The program
should have a menu that lets the user perform the following operations:
	Enter new records into the file
	Search for a particular customer’s record and display it
	Search for a particular customer’s record and delete it
	Search for a particular customer’s record and change it
	Display the contents of the entire file

Input Validation: When the data for a new account is entered, be sure the user enters data
for all the fields. No negative account balances should be entered.

Define also a class rather than structure. Have getters and setters. Use private and public.
You do not need to store the information to a file when you use a class. Include operator
overloading to the class. Test your class in main.
*/

struct Customer {
	string name;
	string address;
	string city;
	string state;
	string zip;
	string phone;
	double balance = 0.0;
	string date;
};

void display(Customer c) {

	cout << "Customer Name: " << c.name << endl;
	cout << "Address: " << c.address << " " << c.city << ", " << c.state << " " << c.zip << endl;
	cout << "Phone Number: " << c.phone << endl;
	cout << "Balance: " << c.balance << endl;
	cout << "Date of last payment: " << c.date << endl << endl;

}

void setName(Customer& c) {

	cout << "Customer name: ";
	cin >> c.name;

	if (c.name < "") {
		cout << "INVALID NAME:try again" << endl;
		cout << "Name: ";
		cin >> c.name;
	}

}

void setAddress(Customer& c) {

	cout << "Address: ";
	cin >> c.address;

	if (c.name < "") {
		cout << "INVALID ADDRESS:try again" << endl;
		cout << "Address: ";
		cin >> c.address;
	}

}

void setCity(Customer& c) {

	cout << "City: ";
	cin >> c.city;

	if (c.name < "") {
		cout << "INVALID CITY:try again" << endl;
		cout << "City: ";
		cin >> c.city;
	}

}

void setState(Customer& c) {

	cout << "State: ";
	cin >> c.state;

	if (c.name < "") {
		cout << "INVALID STATE:try again" << endl;
		cout << "State: ";
		cin >> c.state;
	}

}

void setZip(Customer& c) {

	cout << "ZIP: ";
	cin >> c.zip;

	if (c.name < "") {
		cout << "INVALID ZIP:try again" << endl;
		cout << "ZIP: ";
		cin >> c.zip;
	}

}

void setPhone(Customer& c) {

	cout << "Phone Number: ";
	cin >> c.phone;

	if (c.name < "") {
		cout << "INVALID PHONE NUMBER:try again" << endl;
		cout << "Phone Number: ";
		cin >> c.phone;
	}

}

void setBalance(Customer& c) {

	cout << "Balance: ";
	cin >> c.balance;

	if (c.balance < 0) {
		cout << "INVALID BALANCE:try again" << endl;
		cout << "Balance: ";
		cin >> c.balance;
	}

}

void setDate(Customer& c) {

	cout << "Date of last payment: ";
	cin >> c.date;

	if (c.name < "") {
		cout << "INVALID DATE:try again" << endl;
		cout << "Date of last payment: ";
		cin >> c.date;
	}

}

void setInfo(Customer& c) {

	setName(c);
	setAddress(c);
	setCity(c);
	setState(c);
	setZip(c);
	setPhone(c);
	setBalance(c);
	setDate(c);

}

int main() {

	const int size = 10;
	Customer store[size];

	int choice = 0;
	int choice2 = 0;
	int custNum = 0;

	while (choice != 4) {

		cout << "Menu:" << endl;
		cout << "1 - Enter new account information" << endl;
		cout << "2 - Change account information" << endl;
		cout << "3 - Display account information" << endl;
		cout << "4 - Exit";

		cout << endl;
		cout << "Enter choice: ";
		cin >> choice;
		cout << endl;

		if (choice == 1)
			setInfo(store[custNum]);
		else if (choice == 2) {

			cout << "What would you like to change:" << endl;
			cout << "1 - Name" << endl;
			cout << "2 - Address" << endl;
			cout << "3 - City" << endl;
			cout << "4 - State" << endl;
			cout << "5 - ZIP" << endl;
			cout << "6 - Phone Number" << endl;
			cout << "7 - Balance" << endl;
			cout << "8 - Date of last payment" << endl;
			cout << "Other Number - Back" << endl;

			cout << endl;
			cout << "Enter choice: ";
			cin >> choice2;
			cout << endl;

			if (choice2 == 1)
				setName(store[custNum]);
			else if (choice2 == 2)
				setAddress(store[custNum]);
			else if (choice2 == 3)
				setCity(store[custNum]);
			else if (choice2 == 4)
				setState(store[custNum]);
			else if (choice2 == 5)
				setZip(store[custNum]);
			else if (choice2 == 6)
				setPhone(store[custNum]);
			else if (choice2 == 7)
				setBalance(store[custNum]);
			else if (choice2 == 8)
				setDate(store[custNum]);

		}
		else if (choice == 3)
			display(store[custNum]);
		else if (choice == 4)
			break;
		else
			cout << "Please enter valid choice." << endl;

	}

	cout << "End Program" << endl;

}
