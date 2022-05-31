#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <string>

class Contact {
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nick_name;
		std::string _phone_nbr;
		std::string _darkest_secret;
	public:
		Contact();
		~Contact();
		int		SetContact();
		void	ViewContact(Contact);
};

#endif