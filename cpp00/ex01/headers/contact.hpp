#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class   Contact {
    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _phone_number;
        std::string _darkest_secret;
    public:
        std::string Contact::GetFirstName(void);
        std::string Contact::GetLastName(void);
        std::string Contact::GetNickName(void);
        std::string Contact::GetPhoneNumber(void);
        std::string Contact::GetDarkestSecret(void);
        void Contact::SetFirstName(std::string firstname);
        void Contact::SetLastName(std::string lastname);
        void Contact::SetNickName(std::string nickname);
        void Contact::SetPhoneNumber(std::string phonenumber);
        void Contact::SetDarkestSecret(std::string darkestsecret);
        
};

#endif