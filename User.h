#pragma once
#include <iostream>
#include <fstream>

class User {
public:
	User();

	void registrationInput();
	void loginInput();
	void printInfo() const;

private:
	std::string username;
	std::string password;
	std::string emailAddress;
};
