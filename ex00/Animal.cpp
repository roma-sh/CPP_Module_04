/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:11:56 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/22 22:12:07 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("UNKNOWN")
{
	std::cout<< "Animal default constructor is here"<<std::endl;
}
Animal::Animal(std::string type_in)
{
	type = type_in;
	std::cout<< "Animal constructor is here"<<std::endl;

}
Animal::Animal(Animal& original) : type(original.type)
{
	std::cout<< "Animal copy constructor is here"<<std::endl;
}
Animal& Animal::operator=(Animal& original)
{
	if (this != &original)
		type = original.type;
	std::cout<< "Animal copy assignment operator is here"<<std::endl;
	return (*this);
}
Animal::~Animal()
{
	std::cout<< "Animal destructor is here"<<std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
		std::cout<<"this is Unknown animal"<<std::endl;
}
