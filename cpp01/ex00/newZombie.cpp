#include <Zombie.hpp>

Zombie* newZombie( std::string name ) {
	Zombie* brainEater = new Zombie;
	if (brainEater == NULL)
		return (NULL);
	brainEater->setName( name );
	return brainEater;
}