#include "User.h"
#include <iostream>
#include <cstring>
#include <string>

using std::cin;
using std::cout;
using std::endl;

User::User() {
	username = "\0";
	password = "\0";
	emailAddress = "\0";
}

std::string User::getUsername() const {
	return username;
}

std::string User::getPassword() const {
	return password;
}

std::string User::getEmailAddress() const {
	return emailAddress;
}

void User::registrationInput() {
	cout << "Enter a username: ";
	getline(cin, username);

	cout << "Enter a password: ";
	getline(cin, password);

	cout << "Enter an email address: ";
	getline(cin, emailAddress);
}

void User::loginInput() {
	cout << "Enter your username: ";
	getline(cin, username);

	cout << "Enter your password: ";
	getline(cin, password);

	cout << "Enter your email address: ";
	getline(cin, emailAddress);
}
