#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	horde = zombieHorde(10, "enzo");
	horde[4].announce();
}
