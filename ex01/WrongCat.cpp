/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:54:04 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/22 22:14:16 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout<< "WrongCat default constructor is here"<<std::endl;
}
WrongCat::WrongCat(std::string type_in) : WrongAnimal("Animal_cat")
{
	(void)type_in;
	type = "WrongCat";
	std::cout<< "WrongCat constructor is here"<<std::endl;

}
WrongCat::WrongCat(WrongCat& original) : WrongAnimal(original)
{
	type = original.type;
	std::cout<< "WrongCat copy constructor is here"<<std::endl;
}
WrongCat& WrongCat::operator=(WrongCat& original)
{
	if (this != &original)
		type = original.type;
	std::cout<< "WrongCat copy assignment operator is here"<<std::endl;
	return (*this);
}
WrongCat::~WrongCat()
{
	std::cout<< "WrongCat destructor is here"<<std::endl;
}
void	WrongCat::makeSound() const
{
	std::cout<<"Woof Woof ... Woooof .. Wait!! WHAT!!!"<<std::endl;
}
