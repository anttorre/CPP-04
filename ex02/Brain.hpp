/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:11:55 by anttorre          #+#    #+#             */
/*   Updated: 2024/06/14 15:47:51 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
		
	public:
		Brain();
		Brain(Brain &other);
		~Brain();
		Brain& operator=(Brain &other);
		std::string *getIdeas(int index);
		void setIdeas(int index, std::string idea);
};

#endif