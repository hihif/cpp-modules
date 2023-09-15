/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:22:45 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/07 15:47:08 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap "  << this->Name << " Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
	std::cout << "ScavTrap "  << this->Name << " Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "Scavtrap "  << this->Name << " Copy assignment operator called" << std::endl;
    this->Name = other.Name;
    this->HP = other.HP;
    this->EP = other.EP;
    this->AD = other.AD;
    return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "\x1B[31mScavTrap "  << this->Name << " Destructor called\x1B[0m" << std::endl;
}

void    ScavTrap::attack(const std::string& target ) {
    if (this->EP > 0 && this->HP > 0) {
        std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->AD << " points of damage!" << std::endl;
        this->EP--;
    } else if (this->EP <= 0) {
        std::cout << "ScavTrap " << this->Name << " has no energy points left!" << std::endl;
    } else {
        std::cout << "ScavTrap " << this->Name << " has no hit points left!" << std::endl;
    }
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << Name << " is guarding the gate Now!" << std::endl;
}