#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int		contact_count;
public:
	PhoneBook();
	~PhoneBook();
	void add();
	void search();
};

#endif