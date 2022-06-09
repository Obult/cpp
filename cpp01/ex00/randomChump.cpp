#include <Zombie.hpp>

void	randomChump( std::string name ) {
	Zombie* brainEater;

	brainEater = newZombie( name );
	if ( brainEater == NULL )
		return ;
	brainEater->announce();
	brainEater->~Zombie();
}
