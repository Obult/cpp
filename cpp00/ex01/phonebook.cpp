#include <phonebook.hpp>
#include <iostream>
#include <utils.hpp>
#include <iomanip>

Phonebook::Phonebook() {

}

Phonebook::~Phonebook() {

}

void    Phonebook::SetContact(Contact contact, int index) {

}

void    Phonebook::PrintContacts() {
    for (int i = 0; i < 8; i++)
    {
        std::cout <<
            std::setw(10) << i << "|" <<
            std::setw(10) << phonebook_truncate(this->_contacts[i].GetFirstName()) << "|" <<
            std::setw(10) << phonebook_truncate(this->_contacts[i].GetLastName()) << "|" <<
            std::setw(10) << phonebook_truncate(this->_contacts[i].GetNickName()) << std::endl;
        // last_name
        // nickname
    }
}