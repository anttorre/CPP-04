/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 14:49:41 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/19 16:00:02 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "";
}

AMateria::AMateria(std::string &type)
{
	this->type = type;
}

AMateria::AMateria(AMateria &other)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = other;
}

AMateria::~AMateria()
{
	std::cout << "AMateria " << this->type << " destroyed" << std::endl;
}

AMateria& AMateria::operator=(AMateria &other)
{
	std::cout << "AMateria operator assignment called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

const std::string& AMateria::getType() const
{
	return this->type;
}

void	AMateria::setType(std::string type)
{
	this->type = type;
}

AMateria* AMateria::clone() const
{
	return (AMateria*)this;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "AMateria function use()" << std::endl;
}