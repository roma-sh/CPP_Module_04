/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:02:20 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/29 01:38:15 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
protected:
	std::string _type;
public:
	AMateria();
	AMateria(std::string const& type);
	AMateria(const AMateria& original);
	AMateria& operator=(AMateria& original);
	virtual ~AMateria() = 0;

	std::string const& getType() const; //Returns the materia type
	void	setType(std::string type);
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif
