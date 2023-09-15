/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:08:27 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/21 15:23:06 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Character.hpp"

Character::Character() {
	for (int i = 0; i < 4; i++) {
		inventory[i] = nullptr;
		invenAdd[i] = nullptr;
	}
}

Character::Character(std::string name) {
	this->Name = name;
	for (int i = 0; i < 4; i++) {
		inventory[i] = nullptr;
		invenAdd[i] = nullptr;
	}
}

Character::Character(const Character& other) {
	*this = other;
}

Character& Character::operator=(const Character& other) {
	this->Name = other.Name;
	for (int i = 0; i < 4; i++) {
		inventory[i] = other.inventory[i];
		invenAdd[i] = other.invenAdd[i];
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (invenAdd[i])
			delete invenAdd[i];
	}
}

std::string const& Character::getName(void) const {
	return this->Name;
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!inventory[i]) {
			inventory[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (idx > -1 && idx < 4)
	{
		invenAdd[idx] = inventory[idx];
		inventory[idx] = nullptr;
	}
	
}

void	Character::use(int idx, ICharacter& target) {
	if (idx > -1 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}
