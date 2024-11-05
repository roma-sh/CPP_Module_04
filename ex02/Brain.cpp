/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:18:33 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/23 00:32:47 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<< "Brain default constructor is here"<<std::endl;
}

Brain::Brain(Brain& original)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = original.ideas[i];
	}
	std::cout<< "Brain copy constructor is here"<<std::endl;
}
Brain& Brain::operator=(Brain& original)
{
	if (this != &original)
	{
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = original.ideas[i];
		}
	}
	std::cout<< "Brain copy assignment operator is here"<<std::endl;
	return (*this);
}
Brain::~Brain()
{
	std::cout<< "Brain destructor is here"<<std::endl;
}

void Brain::Print_Ideas()
{
	for (int i = 0; i < 100; i++)
	{
		if (!ideas[i].empty())
			std::cout << "ideas["<<i<<"]: "<<ideas[i] << std::endl;
	}
}

void Brain::Add_Idea(const std::string& newIdea) {
	for (int i = 0; i < 100; ++i) {
		if (ideas[i].empty()) {
			ideas[i] = newIdea;
			return;
		}
	}
	std::cerr << "No more space in ideas array." << std::endl;
}
