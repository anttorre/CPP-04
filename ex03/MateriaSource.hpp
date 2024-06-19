/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 12:00:32 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/19 12:45:58 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materias[4];
		
	public:
		MateriaSource();
		MateriaSource(MateriaSource &other);
		~MateriaSource();
		MateriaSource& operator=(MateriaSource &other);
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
};
