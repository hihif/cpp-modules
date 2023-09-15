/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:04:32 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/15 16:08:08 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap "  << this->Name << " Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), EP(10), HP(10), AD(0) {
	std::cout << "ClapTrap "  << this->Name << " Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap "  << this->Name << " Copy constructor called" << std::endl;
    this->Name = other.Name;
    this->HP = other.HP;
    this->EP = other.EP;
    this->AD = other.AD;
    return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "\x1B[31mClapTrap "  << this->Name << " Destructor called\x1B[0m" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (this->EP > 0 && this->HP > 0) {
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->AD << " points of damage!" << std::endl;
        this->EP--;
    } else if (this->EP <= 0) {
        std::cout << "ClapTrap " << this->Name << " has no energy points left!" << std::endl;
    } else {
        std::cout << "ClapTrap " << this->Name << " has no hit points left!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->HP > 0) {
        this->HP -= amount;
        if (this->HP < 0) this->HP = 0;
        std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << this->Name << " is already terminated!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->EP > 0 && this->HP > 0) {
        this->HP += amount;
        std::cout << "ClapTrap " << this->Name << " is repaired for " << amount << " hit points!" << std::endl;
        this->EP--;
    } else if (this->EP <= 0) {
        std::cout << "ClapTrap " << this->Name << " has no energy points left!" << std::endl;
    } else {
        std::cout << "ClapTrap " << this->Name << " can't be repaired as it has no hit points left!" << std::endl;
    }
}

