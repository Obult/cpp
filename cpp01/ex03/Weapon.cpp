#include <Weapon.hpp>

Weapon::Weapon() {
}

Weapon::Weapon( std::string type ) {
	this->_type = type;
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType() {
	std::string &reference = this->_type;
	return (reference);
}

void	Weapon::setType( std::string type ) {
	this->_type = type;
}
