#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <contact.hpp>

class Phonebook {
	private:
		Contact	_contacts[8];
	public:
		Phonebook();
		~Phonebook();
        void    Phonebook::SetContact(Contact contact, int index);
        void    Phonebook::PrintContacts();
};

#endif