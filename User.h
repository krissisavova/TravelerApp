#pragma once
#include <iostream>
#include <fstream>

class User {
public:
	User();
	User(const User& other);
	~User();

	void registrationInput();
	void loginInput();

private:
	char* username;
	char* password;
	char* emailAddress;

	void del();
	void copy(const User&);
};

