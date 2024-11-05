/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:52:25 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/22 22:14:32 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("UNKNOWN")
{
	std::cout<< "WrongAnimal default constructor is here"<<std::endl;
}
WrongAnimal::WrongAnimal(std::string type_in)
{
	type = type_in;
	std::cout<< "WrongAnimal constructor is here"<<std::endl;

}
WrongAnimal::WrongAnimal(WrongAnimal& original) : type(original.type)
{
	std::cout<< "WrongAnimal copy constructor is here"<<std::endl;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal& original)
{
	if (this != &original)
		type = original.type;
	std::cout<< "WrongAnimal copy assignment operator is here"<<std::endl;
	return (*this);
}
WrongAnimal::~WrongAnimal()
{
	std::cout<< "WrongAnimal destructor is here"<<std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout<<"this is Unknown animal"<<std::endl;
}
