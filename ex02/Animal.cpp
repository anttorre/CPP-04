/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:23:31 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/14 13:12:02 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{	
	std::cout << "Animal constructor called." << std::endl;
	this->type = "Animal";
}

Animal::Animal(Animal &other)
{
	std::cout << "Animal copy constructor called." << std::endl;
	*this = other;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called." << std::endl;
}

Animal& Animal::operator=(Animal &other)
{
	std::cout << "Animal assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
	std::cout << "Generic Animal sound" << std::endl;
}