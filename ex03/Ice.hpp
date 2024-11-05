/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:31:00 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/29 01:42:48 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const& type);
		Ice(const Ice& original);
		Ice& operator=(Ice& original);
		virtual ~Ice();

		Ice* clone() const override;
		void use(ICharacter& target) override;
};

#endif
