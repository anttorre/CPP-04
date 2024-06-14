/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:33:19 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/14 13:12:34 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{	
	std::cout << "Dog constructor called." << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog &other)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called." << std::endl;
}

Dog& Dog::operator=(Dog &other)
{
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void	Dog::makeSound()
{
	std::cout << "Woof!" << std::endl;
}