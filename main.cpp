#include "User.h"
#include <iostream>

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

int main() {

	User u1, u2;

	int option = 0;
	welcomeText();
	cout << "Choose an option: ";
	cin >> option;	

	system("cls");
	cin.ignore(); // ignoring that enter the user presses when inserts the option number

	switch (option) {
	case 1: u1.registrationInput(); u1.printInfo(); break;
	case 2: u1.loginInput(); u1.printInfo(); break;
	default: cout << "Invalid option! Exiting..."; break;
	}

	return 0;
}
