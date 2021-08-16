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
	cout << "2. Already have an account? Login " << endl;
}

int main() {


	int option = 0;
	welcomeText();
	cout << "Choose an option: " << endl;
	cin >> option;

		system("cls");

		//switch (option) {
		//case 1: registrationInput(); break;
		//case 2: cout << "Hello!\n"; break;
		//default: cout << "Invalid option! Exiting..."; break;
		//}

	return 0;
}