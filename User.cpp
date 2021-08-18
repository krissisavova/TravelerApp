#include "User.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cassert>
#include <regex>

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

void User::registrationInput(std::fstream& file) {
	file.open("users.db", std::ios::out); // write mode 
	if (!file) {
		cout << "Failed to open file...\n";
		exit(1);
	}
	else {
		file << "Usernames:" << "\t" << "Passwords:" << "\t" << "Email Addresses:" << endl;

			cout << "Enter a username: ";
			getline(cin, username);
			assert(username.size() > 2 && username.size() < 20);

			cout << "Enter a password: ";
			getline(cin, password);
			assert(password.size() > 5 && password.size() < 15);

			const std::regex pattern
			("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

			cout << "Enter an email address: ";
			getline(cin, emailAddress);
			assert(std::regex_match(emailAddress, pattern));

		file << username << "\t" << password << "\t" << emailAddress << endl;

		file.close();

		std::ofstream userfile;
		userfile.open(username + ".db");
		if (!userfile) {
			cout << "Failed to open file...\n";
			exit(1);
		}
		else {
			userfile << "Here are your comments about different destinations, " << username << ": \n\n";
			userfile << "Destination:" << "\t" << "Time period:" << "\t" << "Stars(1-5):" << "\t" << "Comment: " << endl;
			userfile.close();
		}
	}
}

bool User::isLoggedIn() {
	std::string un, pwd, ea;

	cout << "Enter your username: ";
	getline(cin, username);

	cout << "Enter your password: ";
	getline(cin, password);

	cout << "Enter your email address: ";
	getline(cin, emailAddress);

	std::ifstream read("users.db");
	while (read.good()) {
		getline(read, un);
		getline(read, pwd);
		getline(read, ea);
	}

	if (un == username && pwd == password && ea == emailAddress) 
		return true;
	else 
		return false;
}
