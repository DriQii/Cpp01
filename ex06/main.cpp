#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;
	int	j = 0;
	std::string	logTab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2)
	{
		std::cout << "Probably complaining about insignificant problems" << std::endl;
		return(1);
	}
	for(int i = 0; i < 4; i++)
	{
		if (logTab[i].compare(argv[1]) == 0)
			j = 1;
		if (j)
			harl.complain(logTab[i]);
	}
	if (j == 0)
		std::cout << "Probably complaining about insignificant problems" << std::endl;
	return(0);
}
