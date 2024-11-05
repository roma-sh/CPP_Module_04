/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:52:20 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/29 19:24:24 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type_in);
		WrongAnimal(WrongAnimal& original);
		WrongAnimal& operator=(WrongAnimal& original);
		virtual ~WrongAnimal();

		std::string getType() const;
		void	makeSound() const;
};

#endif
