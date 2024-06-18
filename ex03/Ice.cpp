/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:23:13 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/18 15:40:44 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
	std::cout << "Ice Default constructor called. Type: " << this->type << std::endl;
}

Ice::Ice(Ice &other)
{
	std::cout << "Ice Copy constructor called\n";
	*this = other;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called\n";
}

Ice& Ice::operator=(Ice &other)
{
	std::cout << "Ice operator assignment called.\n";
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an " << this->getType() << " bolt at " << target.getName() << " *\n";
}