/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:33:28 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/14 13:31:18 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{	
	std::cout << "WrongCat constructor called." << std::endl;
	this->type = "Cat";
}

WrongCat::WrongCat(WrongCat &other)
{
	std::cout << "WrongCat copy constructor called." << std::endl;
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat &other)
{
	std::cout << "WrongCat assignment operator called." << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

void	WrongCat::makeSound()
{
	std::cout << "Meow" << std::endl;
}
