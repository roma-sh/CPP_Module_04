/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:30:52 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/29 01:42:46 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(std::string const& type);
		Cure(const Cure& original);
		Cure& operator=(Cure& original);
		virtual ~Cure();

		Cure* clone() const override;
		void use(ICharacter& target) override;
};

#endif
