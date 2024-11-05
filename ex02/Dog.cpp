/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:34:38 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/23 00:41:14 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	_Brain = new Brain();
	type = "Dog";
	std::cout<< "Dog default constructor is here"<<std::endl;
}
Dog::Dog(std::string type_in) : Animal("Animal_Dog")
{
	_Brain = new Brain();
	(void)type_in;
	type = "Dog";
	std::cout<< "Dog constructor is here"<<std::endl;

}
Dog::Dog(Dog& original) : Animal(original)
{
	//A deep copy: creating a new, independent copy
	//of the dynamically allocated resources (like Brain), ensuring that each object
	//has its own separate copy of the resource.
	//
	// A shallow copy means that when we copy an object,
	//we copy only the pointers (or references) to dynamically allocated resources (like Brain*)
	_Brain = new Brain(*original._Brain);
	type = original.type;
	std::cout<< "Dog copy constructor is here"<<std::endl;
}
Dog& Dog::operator=(Dog& original)
{
	// Here also we need a deep copy
	if (this != &original)
	{
		type = original.type;
		delete _Brain;
		_Brain = new Brain(*original._Brain);
	}
	std::cout<< "Dog copy assignment operator is here"<<std::endl;
	return (*this);
}
Dog::~Dog()
{
	delete _Brain;
	std::cout<< "Dog destructor is here"<<std::endl;
}

void	Dog::makeSound() const
{
	std::cout<<"Woof Woof ... Woooof"<<std::endl;
}

Brain* Dog::getBrain()
{
	return (_Brain);
}
