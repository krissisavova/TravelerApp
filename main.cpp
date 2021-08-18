#include "User.h"
#include <iostream>
#include <fstream>
#include <string>

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
	cout << "*. Press any other key to exit " << endl;
}

int main() {

	User u1, u2;

	int option = 0;
	welcomeText();
	cout << "Choose an option: ";
	cin >> option;	

	system("cls");
	cin.ignore(); // ignoring that "enter" the user presses when they insert the option number

	std::fstream mydb;

	if (option == 1) {
		std::string un, pwd, ea;
		u1.registrationInput(mydb);
		system("cls");
		main();
	}
	else if (option == 2) {
		bool status = u1.isLoggedIn();
		if (!status) {
			cout << "Sorry, but we could not find such an account in our system.\n";
			system("pause");
			return 0;
		}
		else {
			cout << "Hello, " << u1.getUsername() << "!\n";
			system("pause");
			return 1;
		}
	}
	else  
		cout << "Bye! Hope to see you soon! :)"; exit(1);

	mydb.close();

	return 0;
}
