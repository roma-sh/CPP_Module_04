/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:06:17 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/28 22:06:25 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <array>

class MateriaSource : public IMateriaSource
{
	protected:
		std::array<AMateria*, 4> _templates;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& original);
		MateriaSource& operator=(const MateriaSource& original);
		virtual ~MateriaSource();
		void learnMateria(AMateria*) override;
		AMateria* createMateria(std::string const & type) override;
};

#endif
