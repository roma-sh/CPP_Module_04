/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:30:55 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/29 01:53:57 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->setType("cure");
	std::cout<< "Cure default constructor"<<std::endl;
}

Cure::Cure(std::string const& type)
{
	(void)type;
	this->setType("cure");
	std::cout<< "Cure constructor"<<std::endl;
}

Cure::Cure(const Cure& original) : AMateria(original)
{
	(void)original;
	this->setType("cure");
	std::cout<< "Cure copy constructor is here"<<std::endl;
}

Cure& Cure::operator=(Cure& original)
{
	if (this != &original)
		this->setType("cure");
	std::cout<< "Cure assignment operator"<<std::endl;
	return (*this);
}

Cure::~Cure()
{
	std::cout<< "Cure destructor is here"<<std::endl;
}

Cure* Cure::clone() const
{
	// return (new Cure("cure")); // in this case it's correct but as a good practis:
	return (new Cure(*this)); // use the copy constructor to insure taking all instances
	// new Cure(*this) evaluates to a pointer of type Cure*
	// Don't forget to delete the object if you create it with clone!!
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
