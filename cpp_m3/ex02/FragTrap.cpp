/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 18:08:27 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/07 15:45:36 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap "  << this->Name << " Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->HP = 100;
	this->EP = 100;
	this->AD = 30;
	std::cout << "FragTrap "  << this->Name << " Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
	std::cout << "FragTrap "  << this->Name << " Copy assignment operator called" << std::endl;
    this->Name = other.Name;
    this->HP = other.HP;
    this->EP = other.EP;
    this->AD = other.AD;
    return *this;
}

FragTrap::~FragTrap() {
	std::cout << "\x1B[31mFragTrap "  << this->Name << " Destructor called\x1B[0m" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << Name << " is guarding the gate Now!" << std::endl;
}
 