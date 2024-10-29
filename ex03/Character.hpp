/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:30:44 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/29 01:09:52 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include <array>

class Character : public ICharacter
{
	protected:
		std::string _name;
		std::array<AMateria*, 4> _inventory;
	public:
		Character();
		Character(std::string name);
		Character(const Character& original);
		Character& operator=(const Character& original);
		virtual ~Character();

		std::string const & getName() const override;
		void equip(AMateria* m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter& target) override;
};

#endif
