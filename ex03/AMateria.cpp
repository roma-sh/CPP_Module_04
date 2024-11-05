/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:02:22 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/29 01:44:26 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "UNKNOWN";
	std::cout<< "AMateria default constructor"<<std::endl;
}
AMateria::AMateria(std::string const& type)
{
	_type = type;
	std::cout<< "AMateria constructor"<<std::endl;
}
AMateria::AMateria(const AMateria& original)
{
	_type = original._type;
	std::cout<< "AMateria copy constructor"<<std::endl;
}
AMateria& AMateria::operator=(AMateria& original)
{
	if (this != &original)
		_type = original._type;
	std::cout<< "AMateria assignment operator is here"<<std::endl;
	return (*this);
}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	std::cout << "YOU CAN'T SEE THIS!" << std::endl;
}

void	AMateria::setType(std::string type)
{
	_type = type;
}
