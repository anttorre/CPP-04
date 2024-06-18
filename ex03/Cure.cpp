/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:34:30 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/18 15:40:32 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure()
{
	this->type = "cure";
	std::cout << "Cure Default constructor called. Type: " << this->type << std::endl;
}

Cure::Cure(Cure &other)
{
	std::cout << "Cure Copy constructor called\n";
	*this = other;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called\n";
}

Cure& Cure::operator=(Cure &other)
{
	std::cout << "Cure operator assignment called.\n";
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}