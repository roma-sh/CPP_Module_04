/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:17:35 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/23 00:43:19 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	_Brain = new Brain();
	type = "Cat";
	std::cout<< "Cat default constructor is here"<<std::endl;
}
Cat::Cat(std::string type_in) : Animal("Animal_Dog")
{
	_Brain = new Brain();
	(void)type_in;
	type = "Cat";
	std::cout<< "Cat constructor is here"<<std::endl;

}
Cat::Cat(Cat& original) : Animal(original)
{
	//A deep copy: creating a new, independent copy
	//of the dynamically allocated resources (like Brain), ensuring that each object
	//has its own separate copy of the resource.
	//
	// A shallow copy means that when we copy an object,
	//we copy only the pointers (or references) to dynamically allocated resources (like Brain*)
	_Brain = new Brain(*original._Brain);
	type = original.type;
	std::cout<< "Cat copy constructor is here"<<std::endl;
}
Cat& Cat::operator=(Cat& original)
{
	// Here also we need a deep copy
	if (this != &original)
	{
		type = original.type;
		delete _Brain;
		_Brain = new Brain(*original._Brain);
	}
	std::cout<< "Cat copy assignment operator is here"<<std::endl;
	return (*this);
}
Cat::~Cat()
{
	delete _Brain;
	std::cout<< "Cat destructor is here"<<std::endl;
}
void	Cat::makeSound() const
{
	std::cout<<"MeOoOoOoOWWW"<<std::endl;
}

Brain* Cat::getBrain()
{
	return (_Brain);
}
