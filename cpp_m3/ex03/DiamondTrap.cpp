/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:08:03 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/07 16:01:23 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap "  << this->Name << " Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {
	this->Name = name;
	this->ClapTrap::Name = name + "_clap_name";
    FragTrap::HP = 100;
    ScavTrap::EP = 50;
    FragTrap::AD = 30;

	std::cout << "DiamondTrap "  << this->Name << " Copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {
	std::cout << "Copy "  << this->Name << " assignment operator called" << std::endl;
    this->Name = other.Name;
    this->HP = other.HP;
    this->EP = other.EP;
    this->AD = other.AD;
    return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "\x1B[31mDiamondTrap "  << this->Name << " Destructor called\x1B[0m" << std::endl;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap name is " << this->Name << ", and ClapTrap name is " << ClapTrap::Name << std::endl;
}
