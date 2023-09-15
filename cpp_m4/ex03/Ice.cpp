/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:39:08 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/21 15:21:44 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice::Ice() : AMateria("ice") {
	
}

Ice::Ice(const Ice& other) : AMateria("ice") {
	*this = other;
}

Ice& Ice::operator=(const Ice& other) {
	(void)other;
	return *this;
}

Ice::~Ice() {
	
}


AMateria*	Ice::clone() const {
	return new Ice(*this);
}

void	Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

