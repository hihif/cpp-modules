/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:28:21 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/16 16:14:41 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog() {
	type = "Dog";
	std::cout << "A Dog's Default constructor called" << std::endl;
}

Dog::Dog(std::string& Type) {
	std::cout << this->type << "Copy constructor called" << std::endl;
	this->type = Type;
}

Dog& Dog::operator=(Dog& other)
{
	std::cout << this->type << "Copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Dog::~Dog(void) {
	std::cout << "A Dog's Destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Bark Bark !!" << std::endl;
}