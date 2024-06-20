/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 16:19:41 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/20 18:20:20 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <cstdlib>

Character::Character()
{
	std::cout << "Character default constructor called\n";
	this->name = "";
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
	for (int i = 0; i < 500; i++)
	{
		this->toDelete[i] = NULL;
	}
}

Character::Character(std::string name)
{
	std::cout << "Character param constructor called\n";
	this->name = name;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
	for (int i = 0; i < 500; i++)
	{
		this->toDelete[i] = NULL;
	}
}

Character::Character(Character &other)
{
	std::cout << "Character copy constructor called\n";
	*this = other;
}

Character::~Character()
{
	std::cout << "Character destructor called\n";
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	for (int i = 0; i < 500; i++)
	{
		if (this->toDelete[i])
			delete this->toDelete[i];
	}
}

Character& Character::operator=(Character &other)
{
	std::cout << "Character default constructor called\n";
	if (this != &other)
	{
		this->name = other.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
				delete this->inventory[i];
			if (other.inventory[i])
				this->inventory[i] = other.inventory[i]->clone();
			else
				this->inventory[i] = NULL;
		}
		for (int i = 0; i < 500; i++)
		{
			if (this->toDelete[i])
				delete this->toDelete[i];
			if (other.toDelete[i])
				this->toDelete[i] = other.toDelete[i]->clone();
			else
				this->toDelete[i] = NULL;
		}
	}
	return *this;
}

std::string const& Character::getName() const 
{
	return this->name;
}

AMateria* Character::getMateria(int idx)
{
	if (idx < 0 || idx > 4)
	{
		std::cout << "Index out of bounds.\n";
		return (NULL);
	}
	else
		return this->inventory[idx];
}

void	Character::equip(AMateria *m)
{
	bool inventoryFull = true; 
    for (int i = 0; i < 4; i++) 
    { 
        if (this->inventory[i] == NULL) 
        { 
            this->inventory[i] = m; 
            std::cout << "Materia " << m->getType() << " equipped\n"; 
            inventoryFull = false; 
            return; 
        } 
    } 
    if (inventoryFull) 
    { 
        for (int j = 0; j < 500; j++) 
        { 
            if (this->toDelete[j] == NULL) 
            { 
                this->toDelete[j] = m; 
                std::cout << "Inventory full\n"; 
                return; 
            } 
        } 
    } 
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
		{
			this->inventory[idx]->use(target);
		}
		else
			std::cout << "Can't use this materia\n";
	}
}