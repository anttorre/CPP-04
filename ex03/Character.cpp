/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:19:41 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/18 17:26:18 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called\n";
	this->name = "";
	this->inventory[4] = {NULL};
}

Character::Character(std::string name)
{
	std::cout << "Character param constructor called\n";
	this->name = name;
	this->inventory[4] = {NULL};
}

Character::Character(Character &other)
{
	std::cout << "Character copy constructor called\n";
	*this = other;
}

Character::~Character()
{
	std::cout << "Character destructor called\n";
}

Character& Character::operator=(Character &other)
{
	std::cout << "Character default constructor called\n";
	if (this != &other)
	{
		this->name = other.name;
		this->inventory[4] = {NULL};
	}
	return *this;
}

std::string const& Character::getName() const 
{
	return this->name;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << "Materia " << m->getType() << " equipped\n";
		}
	}
	std::cout << "Inventory full\n";
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		std::cout << "Index out of bounds.\n";
	else
	{
		std::cout << "Materia " << this->inventory[idx]->getType() << " Unequipped\n";
		if (this->inventory[idx])
			this->inventory[idx] = NULL;
		else
			std::cout << "Can't unequipe this materia\n";
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		std::cout << "Index out of bounds.\n";
	else
	{
		if (this->inventory[idx])
			this->inventory[idx]->use(target);
		else
			std::cout << "Can't use this materia\n";
	}
}