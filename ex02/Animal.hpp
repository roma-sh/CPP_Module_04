/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:12:20 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/22 22:11:19 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string type_in);
		Animal(Animal& original);
		Animal& operator=(Animal& original);
		virtual ~Animal() = 0; // Pure virtual destructor makes Animal an abstract class

		std::string getType() const;
		virtual void	makeSound() const = 0; //Pure virtual function
};

#endif
