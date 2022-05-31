#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <contact.hpp>

class Phonebook {
	private:
		Contact	contacts[8];
	public:
		Phonebook();
		~Phonebook();
};

#endif