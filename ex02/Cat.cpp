/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:33:28 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/14 16:19:28 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{	
	std::cout << "Cat constructor called." << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat &other)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = other;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called." << std::endl;
}

Cat& Cat::operator=(Cat &other)
{
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Brain * Cat::getBrain()
{
	return this->brain;
}
