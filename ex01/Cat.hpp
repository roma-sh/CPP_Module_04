/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:17:32 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/23 00:43:01 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _Brain;
	public:
		Cat();
		Cat(std::string type_in);
		Cat(Cat& original);
		Cat& operator=(Cat& original);
		~Cat();

		void	makeSound() const;
		Brain*	getBrain();
};

#endif
