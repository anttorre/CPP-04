/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:33:19 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/24 15:07:28 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{	
	std::cout << "Dog constructor called." << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(Dog &other)
{
	std::cout << "Dog copy constructor called." << std::endl;
	*this = other;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called." << std::endl;
}

Dog& Dog::operator=(Dog &other)
{
	std::cout << "Dog assignment operator called." << std::endl;
	if (this != &other)
	{
		delete this->brain;
		this->type = other.type;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

void	Dog::makeSound()
{
	std::cout << "Woof!" << std::endl;
}

Brain * Dog::getBrain()
{
	return this->brain;
}