#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
public:
    PhoneBook();
    bool AddContact(Contact c);
    void SearchContact();
		
private:
	Contact arr[8];
	int size_;
};

#endif

