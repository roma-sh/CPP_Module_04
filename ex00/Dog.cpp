/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:34:38 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/22 22:12:50 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout<< "Dog default constructor is here"<<std::endl;
}
Dog::Dog(std::string type_in) : Animal("Animal_Dog")
{
	(void)type_in;
	type = "Dog";
	std::cout<< "Dog constructor is here"<<std::endl;

}
Dog::Dog(Dog& original) : Animal(original)
{
	type = original.type;
	std::cout<< "Dog copy constructor is here"<<std::endl;
}
Dog& Dog::operator=(Dog& original)
{
	if (this != &original)
		type = original.type;
	std::cout<< "Dog copy assignment operator is here"<<std::endl;
	return (*this);
}
Dog::~Dog()
{
	std::cout<< "Dog destructor is here"<<std::endl;
}

void	Dog::makeSound() const
{
	std::cout<<"Woof Woof ... Woooof"<<std::endl;
}
