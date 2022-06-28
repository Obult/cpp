#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <contact.hpp>

		void    phoneloop();
		
class Phonebook {
	private:
		Contact	_contacts[8];
		int		_counter;
	public:
		Phonebook();
		~Phonebook();
        void    SetContact(Contact contact, int index);
		void    GaddContact();
		void    PrintContact(int index);
        void    PrintContacts();
};

#endif