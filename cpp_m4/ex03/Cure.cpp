/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:39:03 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/21 15:21:32 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cure.hpp"

Cure::Cure() : AMateria("cure") {
	
}

Cure::Cure(const Cure& other) : AMateria("cure") {
	*this = other;
}

Cure& Cure::operator=(const Cure& other) {
	(void)other;
	return *this;
}

Cure::~Cure() {
	
}

AMateria*	Cure::clone() const {
	return new Cure(*this);
}

void	Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
