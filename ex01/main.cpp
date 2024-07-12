#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int		n = 42;

	horde = zombieHorde(n, "enzo");
	for(int i = 0; i < n; i++)
		horde[i].announce();
}
