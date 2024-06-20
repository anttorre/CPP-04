/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:59:50 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/20 17:38:32 by anttorre         ###   ########.fr       */
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
	AMateria* tmp3;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp3 = src->createMateria("cure");
	me->equip(tmp3);
	
	ICharacter* bob = new Character("bob");
	Character *ant = new Character(*(Character *)(me));
	AMateria* tmp2 = src->createMateria("cure");
	AMateria* tmp4 = src->createMateria("cure");
	AMateria* tmp5 = src->createMateria("cure");
	AMateria* tmp6 = src->createMateria("cure");
	ant->equip(tmp2);
	ant->equip(tmp4);
	ant->equip(tmp5);
	ant->equip(tmp6);
	
	std::cout << std::endl;
	std::cout << "OUTPUT" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	ant->use(0, *ant);
	AMateria *saveIce = ant->getMateria(0);
	ant->unequip(0);
	ant->use(1, *bob);
	ant->use(0, *ant);
	me->use(0, *bob);
	std::cout << std::endl;
	
	delete bob;
	delete me;
	delete src;
	delete ant;
	delete saveIce;
	
	return 0;
}