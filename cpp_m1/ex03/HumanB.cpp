/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:52:13 by fhihi             #+#    #+#             */
/*   Updated: 2023/06/18 17:00:28 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanB.hpp"

void	HumanB::setWeapon(Weapon& wpn) {
	this->weapon = &wpn;
}

void	HumanB::attack( void ) {
	if (this->weapon)
		std::cout << this->Name << " attacks with their " << (*this).weapon->getType() << std::endl;
	else
		std::cout << this->Name << " does not have a Weapon" << std::endl;
}