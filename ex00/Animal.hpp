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
		virtual ~Animal();

		std::string getType() const;
		virtual void	makeSound() const;
		// when a class has virtual functions,
		// it's important when deleting derived class objects through a base class pointer,
		// as it ensures the proper destructor chain is called, avoiding potential memory
		// leaks or undefined behavior.
};

#endif
