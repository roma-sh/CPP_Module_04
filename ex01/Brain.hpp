/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:18:47 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/23 00:32:55 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include "Animal.hpp"

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain& original);
		Brain& operator=(Brain& original);
		virtual ~Brain();

		void Print_Ideas();
		void Add_Idea(const std::string& input_str);
};

#endif
