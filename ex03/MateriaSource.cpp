/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:45:40 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/29 02:01:44 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_templates.fill(nullptr);
}
MateriaSource::MateriaSource(const MateriaSource& original)
{
	_templates.fill(nullptr);
	for (size_t i = 0; i < _templates.size(); ++i)
	{
		if (original._templates[i] != nullptr)
			_templates[i] = original._templates[i]->clone();
	}
}
MateriaSource& MateriaSource::operator=(const MateriaSource& original)
{
	if (this != &original)
	{
		for (size_t i = 0; i < _templates.size(); ++i)
			delete _templates[i];
		_templates.fill(nullptr); // for safety
		// Deep copy the original Materia templates
		for (size_t i = 0; i < _templates.size(); ++i)
		{
			if (original._templates[i] != nullptr) {
				_templates[i] = original._templates[i]->clone(); // Clone each Materia
			}
		}
	}
	return *this;
}
MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < _templates.size(); i++)
		delete _templates[i];
}
void MateriaSource::learnMateria(AMateria* m)
{
	if (m == nullptr)
		return;
	for (size_t i = 0; i < _templates.size(); i++)
	{
		if (_templates[i] == nullptr)
		{
			_templates[i] = m; // Store a clone of the Materia
			return;
		}
	}
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < _templates.size(); ++i)
	{
		if (_templates[i] != nullptr && _templates[i]->getType() == type)
			return _templates[i]->clone(); // Return a clone of the matching template
	}
	return (0); // Return nullptr if no matching type is found
}
