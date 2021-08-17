#include "User.h"
#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;

void welcomeText() {
	cout << "***********************************************************************************************\n" << endl;
	cout << "*********************************** WELCOME TO TRAVELGRAM! ************************************" << endl;
	cout << "Share your traveling experiences with other traveling peeps around the globe\n" << endl;
	cout << "***********************************************************************************************\n" << endl;

	cout << "1. Sign up / Register " << endl;
	cout << "2. Sign in / Login " << endl;
}

void addToFile(std::fstream& out, User& u1) {
	if (out.is_open()) {
		out << u1.getUsername() << "\t" << u1.getPassword() << "\t" << u1.getEmailAddress() << endl;
	}
}

int main() {

	User u1, u2;

	int option = 0;
	welcomeText();
	cout << "Choose an option: ";
	cin >> option;	

	system("cls");
	cin.ignore(); // ignoring that enter the user presses when inserts the option number

	std::fstream mydb;
	mydb.open("users.db", std::ios::out); // write mode 
	mydb << "Usernames:" << "\t" << "Passwords:" << "\t" << "Email Addresses:" << endl;

	switch (option) {
	case 1: 
		u1.registrationInput(); 
		addToFile(mydb, u1);
		break;
	case 2: u1.loginInput(); break;
	default: cout << "Invalid option! Exiting..."; break;
	}

	mydb.close();

	return 0;
}
