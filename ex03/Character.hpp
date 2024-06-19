/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:43:26 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/19 13:07:11 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];
	public:
		Character();
		Character (std::string name);
		Character(Character &other);
		~Character();
		Character& operator=(Character &other);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};