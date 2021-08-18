#pragma once
#include <iostream>
#include <fstream>

class User {
public:
	User();

	void registrationInput(std::fstream& file);
	bool isLoggedIn();

	std::string getUsername() const;
	std::string getPassword() const;
	std::string getEmailAddress() const;

private:
	std::string username;
	std::string password;
	std::string emailAddress;
};
