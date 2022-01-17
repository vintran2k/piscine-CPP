#include "Character.hpp"

Character::Character(void) : _name("Undefined")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(Character const & src)
{
	*this = src;
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	return ;
}

std::string	const &		Character::getName(void) const
{
	return (this->_name);
}

Character &	Character::operator=(Character const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i] != NULL)
			{
				delete this->_inventory[i];
				this->_inventory[i] = NULL;
			}
		}
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
		{
			if (rhs._inventory[i] != NULL)
				this->equip(rhs._inventory[i]->clone());
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

void	Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "Invalid AMateria" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << m->getType() << " has been added to " << this->_name << " inventory" << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
	return ;
}

void		Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
	{
		std::cout << "Nothing to unequip" << std::endl;
		return ;
	}
	std::cout << this->_inventory[idx]->getType() << " has been removed to " << this->_name << " inventory" << std::endl;
	this->_inventory[idx] = NULL;
	return ;
}

void		Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
	{
		std::cout << "Invalid AMateria to use" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
	return ;
}
