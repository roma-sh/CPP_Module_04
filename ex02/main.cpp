/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:12:05 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/23 17:05:38 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* GroupA[100];
	for(int i = 0; i < 100; i++)
	{
		if (i < 50)
			GroupA[i] = new Dog();
		else
			GroupA[i] = new Cat();
	}
	for(int i = 0; i < 100; i++)
		delete GroupA[i];
	std::cout<<"==========================================="<<std::endl;
	Dog boby("boby");
	boby.getBrain()->Add_Idea("this is the first idea");
	boby.getBrain()->Add_Idea("now I learnt the second");
	boby.getBrain()->Add_Idea("wow I have three ideas now");
	boby.getBrain()->Print_Ideas();
	std::cout<<"==========================================="<<std::endl;
	std::cout<<"=========== Test the Deep copy for cat class ========="<<std::endl;
	Cat x("bis");
	Cat y(x);
	x.getBrain()->Add_Idea("This is my own Idea");
	y.getBrain()->Add_Idea("This is NOT her Idea, I also have my own ideas");
	std::cout<<"==========================================="<<std::endl;
	x.getBrain()->Print_Ideas();
	y.getBrain()->Print_Ideas();
	std::cout<<"==========================================="<<std::endl;

	// but this is now allowd:
	// Animal x;
	// Animal y("Monkey");
	return 0;
}
