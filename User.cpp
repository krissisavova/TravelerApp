#include "User.h"
#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

User::User() {
	username = nullptr;
	password = nullptr;
	emailAddress = nullptr;
}

void User::del() {
	delete[] username;
	delete[] password;
	delete[] emailAddress;
}
void User::copy(const User& other) {

	if (!other.username || !other.password || !other.emailAddress) {
		std::cout << "\n\n\tERROR: The program has detected a nullptr!\n";
		return;
	}

	username = new char[strlen(other.username) + 1];
	strcpy_s(username, strlen(other.username) + 1, other.username);

	password = new char[strlen(other.password) + 1];
	strcpy_s(password, strlen(other.password) + 1, other.password);

	emailAddress = new char[strlen(other.emailAddress) + 1];
	strcpy_s(emailAddress, strlen(other.emailAddress) + 1, other.emailAddress);
}

User::User(const User& other) {
	copy(other);
}

User::~User() {
	del();
}

void User::registrationInput() {
		cout << "\n Enter a username: ";
		cin >> username;
		cout << "\n Enter an email address: ";
		cin >> emailAddress;
		cout << "\n Enter a password: ";
		cin >> password;
		cout << "\n Repeat your password: ";
		cin >> password;
}

void User::loginInput() {
	cout << "\n Enter your username: ";
	cin >> username;
	cout << "\n Enter your password: ";
	cin >> password;
	cout << "\n Enter your email address: ";
	cin >> emailAddress;
}