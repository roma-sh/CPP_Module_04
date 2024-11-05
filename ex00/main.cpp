/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:12:05 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/29 19:25:59 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

// int	main(void)
// {
// 	{
// 		std::cout<<"========================="<<std::endl;
// 		std::cout<<"((((("<<" Animal class test "<<")))))"<<std::endl<<std::endl;
// 		Animal x;
// 		Animal y("monkey");
// 		Animal z(y);
// 		x = z;
// 		x.makeSound();
// 	}
// 	{
// 		std::cout<<"========================="<<std::endl;
// 		std::cout<<"((((("<<"Dog class test"<<")))))"<<std::endl<<std::endl;
// 		Animal x;
// 		Dog	y("frog");
// 		Dog z(y);
// 		std::cout<< "for object x type is: "<< x.getType() <<std::endl;
// 		std::cout<< "for object y type is: "<< y.getType() <<std::endl;
// 		std::cout<< "for object z type is: "<< z.getType() <<std::endl;
// 		y.makeSound();
// 	}
// 	{
// 		std::cout<<"========================="<<std::endl;
// 		std::cout<<"((((("<<"Cat class test"<<")))))"<<std::endl<<std::endl;
// 		Animal x;
// 		Cat	y("frog");
// 		Cat z(y);
// 		std::cout<< "for object x type is: "<< x.getType() <<std::endl;
// 		std::cout<< "for object y type is: "<< y.getType() <<std::endl;
// 		std::cout<< "for object z type is: "<< z.getType() <<std::endl;
// 		z.makeSound();
// 	}
// }

int main()
{
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
}
std::cout<<"================================"<<std::endl;
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
}
return 0;
}
