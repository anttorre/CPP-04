/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:21:41 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/14 15:54:05 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called\n";
}

Brain::Brain(Brain &other)
{
	std::cout << "Brain copy constructor called\n";
	*this = other;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called\n";
}

Brain& Brain::operator=(Brain &other)
{
	std::cout << "Brain assignment operator called\n";
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

std::string *Brain::getIdeas(int index)
{
	if (index < 0 || index >= 100)
		return NULL;
	return &ideas[index];
}

void	Brain::setIdeas(int index, std::string idea)
{
	if (index < 0 || index >= 100)
		return ;
	this->ideas[index] = idea;
}