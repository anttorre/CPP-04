/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:33:28 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/14 13:12:24 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{	
	std::cout << "Cat constructor called." << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat &other)
{
	std::cout << "Cat copy constructor called." << std::endl;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called." << std::endl;
}

Cat& Cat::operator=(Cat &other)
{
	std::cout << "Cat assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void	Cat::makeSound()
{
	std::cout << "Meow" << std::endl;
}
