/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:36:30 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/18 15:56:37 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

AAnimal::AAnimal(void) : type("some AAnimal") {
	std::cout << "An Animals Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string& Type) {
	std::cout << "Copy constructor called" << std::endl;
	this->type = Type;
}

AAnimal& AAnimal::operator=(AAnimal& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

AAnimal::~AAnimal(void) {
	std::cout << "An Animals Destructor called" << std::endl;
}

std::string	AAnimal::getType(void) const {
	return this->type;
}
