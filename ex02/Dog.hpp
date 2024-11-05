/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:55:00 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/22 23:55:34 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _Brain;
	public:
		Dog();
		Dog(std::string type_in);
		Dog(Dog& original);
		Dog& operator=(Dog& original);
		~Dog();

		void	makeSound() const;
		Brain* getBrain();
};

#endif
