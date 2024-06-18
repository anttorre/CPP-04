/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:41:10 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/14 16:20:19 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	//Animal* animal = new Animal();
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	
	std::cout << std::endl;
	std::cout << "Dog type: " << dog->getType() << " " << std::endl;
	std::cout << "Cat type: " << cat->getType() << " " << std::endl;
	
	std::cout << std::endl;
	std::cout << "Dog sound: ";
	dog->makeSound();
	std::cout << "Cat sound: ";
	cat->makeSound();
	
	std::cout << std::endl;
	std::cout << "WrongAnimals Tests" << std::endl;
	WrongAnimal *wrongAnimal = new WrongAnimal();
	WrongAnimal *wrongCat = new WrongCat();
	
	std::cout << std::endl;
	std::cout << "WrongAnimal type: " << wrongAnimal->getType() << " " << std::endl;
	std::cout << "WrongCat type: " << wrongCat->getType() << " " << std::endl;
	
	std::cout << std::endl;
	std::cout << "WrongAnimal sound: ";
	wrongAnimal->makeSound();
	std::cout << "WrongCat sound: ";
	wrongCat->makeSound();

	std::cout << std::endl;

	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;

	std::cout << std::endl;
	std::cout << "DEEP COPY TEST" << std::endl;
	Cat *originalCat = new Cat();
	Cat *copiedCat = new Cat(*originalCat);
	originalCat->makeSound();
	originalCat->getBrain()->setIdeas(0, "Idea propia");

	copiedCat->makeSound();
	copiedCat->getBrain()->setIdeas(0, "Idea no copiada");

	if (originalCat->getBrain()->getIdeas(0) != NULL)
		std::cout << "Original Cat idea: " << *originalCat->getBrain()->getIdeas(0) << std::endl;
	if (copiedCat->getBrain()->getIdeas(0) != NULL)
		std::cout << "Copied Cat idea: " << *copiedCat->getBrain()->getIdeas(0) << std::endl;
	std::cout << std::endl;
	
	delete originalCat;
	delete copiedCat;
	return 0;
}