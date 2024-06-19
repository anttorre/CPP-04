/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:00:29 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/19 13:29:36 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource Default constructor called\n";
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource &other)
{
	*this = other;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called\n";
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i])
			delete this->materias[i];
	}
	
}

MateriaSource& MateriaSource::operator=(MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->materias[i])
				delete this->materias[i];
			if (other.materias[i])
				this->materias[i] = other.materias[i]->clone();
			else
				this->materias[i] = NULL;
		}
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] == NULL)
		{
			this->materias[i] = materia;
			std::cout << "Materia " << materia->getType() << " learned\n";
			return ;
		}
	}
	
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materias[i] && this->materias[i]->getType() == type)
			return this->materias[i]->clone();
	}
	return 0;
}
