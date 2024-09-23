/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:17:35 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/22 22:12:28 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout<< "Cat default constructor is here"<<std::endl;
}
Cat::Cat(std::string type_in) : Animal("Animal_Dog")
{
	(void)type_in;
	type = "Cat";
	std::cout<< "Cat constructor is here"<<std::endl;

}
Cat::Cat(Cat& original) : Animal(original)
{
	type = original.type;
	std::cout<< "Cat copy constructor is here"<<std::endl;
}
Cat& Cat::operator=(Cat& original)
{
	if (this != &original)
		type = original.type;
	std::cout<< "Cat copy assignment operator is here"<<std::endl;
	return (*this);
}
Cat::~Cat()
{
	std::cout<< "Cat destructor is here"<<std::endl;
}
void	Cat::makeSound() const
{
	std::cout<<"MeOoOoOoOWWW"<<std::endl;
}
