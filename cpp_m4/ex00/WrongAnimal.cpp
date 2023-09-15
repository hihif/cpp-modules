/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:17:59 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/16 16:15:13 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("some WrongAnimal") {
	std::cout << "An WrongAnimals Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string& Type) {
	std::cout << "Copy constructor called" << std::endl;
	this->type = Type;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "An WrongAnimals Destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return this->type;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal Sound" << std::endl;
}