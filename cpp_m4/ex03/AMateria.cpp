/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:24:58 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/21 15:18:11 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria(std::string const & type) {
	this->type = type;
}

AMateria::AMateria(const AMateria& other) {
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other) {
	this->type = other.type;
	return *this;
}


AMateria::~AMateria() {
	
}
std::string const & AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	 std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}