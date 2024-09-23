/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:55:00 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/22 22:11:45 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string type_in);
		Dog(Dog& original);
		Dog& operator=(Dog& original);
		~Dog();

		void	makeSound() const;
};

#endif
