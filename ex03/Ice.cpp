/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:30:57 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/29 01:53:51 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->setType("ice");
	std::cout<< "Ice default constructor"<<std::endl;
}

Ice::Ice(std::string const& type)
{
	(void)type;
	this->setType("ice");
	std::cout<< "Ice constructor"<<std::endl;
}

Ice::Ice(const Ice& original) : AMateria(original)
{
	(void)original;
	this->setType("ice");
	std::cout<< "Ice copy constructor is here"<<std::endl;
}

Ice& Ice::operator=(Ice& original)
{
	if (this != &original)
		this->setType("ice");
	std::cout<< "Ice assignment operator"<<std::endl;
	return (*this);
}

Ice::~Ice()
{
	std::cout<< "Ice destructor is here"<<std::endl;
}

Ice* Ice::clone() const
{
	// return (new Ice("ice")); // in this case it's correct but as a good practis:
	return (new Ice(*this)); // use the copy constructor to insure taking all instances
	// new Ice(*this) evaluates to a pointer of type Ice*
	// Don't forget to delete the object if you create it with clone!!
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
