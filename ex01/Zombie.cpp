#include "Zombie.hpp"

Zombie::Zombie(void) : _name("name")
{
}

Zombie::~Zombie()
{
	std::cout << _name << " died" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void	Zombie::set_name(std::string name)
{
	_name = name;
}
