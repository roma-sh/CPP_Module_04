/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:30:31 by rshatra           #+#    #+#             */
/*   Updated: 2024/10/28 20:38:36 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->_name = "UNKNOWN";
	this->_inventory.fill(nullptr);
	std::cout << "Character default constructor" << std::endl;
}

Character::Character(std::string name)
{
	this->_name = name;
	this->_inventory.fill(nullptr);
	std::cout << "Character constructor" << std::endl;
}

Character::Character(const Character& original)
{
	this->_name = original._name;
	this->_inventory.fill(nullptr);
	for (size_t i = 0; i < 4; i++)
	{
		if (original._inventory[i] != nullptr)
			_inventory[i] = original._inventory[i]->clone(); // Use clone to create a new instance
	}
	std::cout << "Character copy constructor" << std::endl;
}

Character& Character::operator=(const Character& original)
{
	if (this != &original)
	{
		this->_name = original._name;
		// Clean up existing Materia:
		for (size_t i = 0; i < _inventory.size(); ++i)
			delete _inventory[i];
		//When dealing with pointers, if you simply copy the pointer values,
		// both objects will point to the same memory location. This can lead
		// to issues like double deletion (both objects trying to delete the same memory) or dangling pointers.
		// that' why we need:
		//### Deep copy of the inventory ####
		for (size_t i = 0; i < _inventory.size(); ++i) {
			// Check if the original has a Materia in this slot
			if (original._inventory[i] != nullptr)
				this->_inventory[i] = original._inventory[i]->clone(); // Clone the Materia
			else
				this->_inventory[i] = nullptr; // Set to nullptr if the original is empty
		}
	}
	return (*this);
}

Character::~Character()
{
	for (size_t i = 0; i < _inventory.size(); ++i)
		delete _inventory[i];
	std::cout << "Character destructor" << std::endl;
}

std::string const& Character::getName() const
{
	return (this->_name);
}
void Character::equip(AMateria* m)
{
	for (size_t i = 0; i < this->_inventory.size(); i++)
	{
		if (this->_inventory[i] == nullptr)
		{
			this->_inventory[i] = m;
			std::cout << this->_name << " equipped " << m->getType() << " Materia." << std::endl;
			return ;
		}
	}
	std::cout << this->_name << "'s inventory is full!" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (_inventory[idx] != nullptr)
		{
				std::cout << _name << " unequipped " << _inventory[idx]->getType() << " Materia." << std::endl;
				_inventory[idx] = nullptr;
		}
	}
	else
		std::cout << "Invalid index!" << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (_inventory[idx] != nullptr)
			_inventory[idx]->use(target);
		else
			std::cout << "Emtpy slot!!" << std::endl;
	}
	else
			std::cout << "Invlaid index" << std::endl;
}
