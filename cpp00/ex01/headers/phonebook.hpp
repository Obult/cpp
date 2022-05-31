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
};

#endif