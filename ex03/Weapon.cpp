#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
}

Weapon::~Weapon()
{
}

std::string const&	Weapon::getType()
{
	return(_type);
}

void	Weapon::setType(std::string new_type)
{
	_type.assign(new_type);
}
