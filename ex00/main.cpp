#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie;
	std::string	name;

	std::cout << "Zombie 1 : ";
	std::getline(std::cin, name);
	zombie = newZombie(name);
	std::cout << "Zombie 2 : ";
	std::getline(std::cin, name);
	zombie->announce();
	delete zombie;
	randomChump(name);
}
