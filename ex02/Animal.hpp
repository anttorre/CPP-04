/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:23:33 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/14 13:11:49 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(Animal& other);
		virtual ~Animal();
		Animal& operator=(Animal &other);
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif