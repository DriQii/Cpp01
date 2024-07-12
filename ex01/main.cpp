#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde;
	int		n = 2;

	horde = zombieHorde(n, "enzo");
	for(int i = 0; i < n; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
