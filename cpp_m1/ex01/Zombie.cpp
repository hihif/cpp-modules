/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:46:01 by fhihi             #+#    #+#             */
/*   Updated: 2023/11/20 15:54:06 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << this->Name << " has been destructed!" << std::endl;
}

void	Zombie::set_name(std::string name) {
	this->Name = name;
}

void	Zombie::announce( void ) {
	std::cout << this->Name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
