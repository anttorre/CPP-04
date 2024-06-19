/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:59:50 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/19 14:49:31 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");
	ICharacter *ant = new Character(*static_cast<Character*>(bob));
	tmp = tmp = src->createMateria("cure");
	ant->equip(tmp);
	
	std::cout << std::endl;
	std::cout << "OUTPUT" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	ant->use(0, *ant);
	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;
	
	return 0;
}