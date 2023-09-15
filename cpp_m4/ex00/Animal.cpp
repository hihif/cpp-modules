/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:36:30 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/16 16:14:15 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal(void) : type("some Animal") {
	std::cout << "An Animals Default constructor called" << std::endl;
}

Animal::Animal(std::string& Type) {
	std::cout << "Copy constructor called" << std::endl;
	this->type = Type;
}

Animal& Animal::operator=(Animal& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "An Animals Destructor called" << std::endl;
}

std::string	Animal::getType(void) const {
	return this->type;
}

void	Animal::makeSound(void) const {
	std::cout << "Animal Sound" << std::endl;
}