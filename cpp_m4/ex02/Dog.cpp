/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:28:21 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/17 16:41:37 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog() {
	b = new Brain;
	type = "Dog";
	std::cout << "A Dogs Default constructor called" << std::endl;
}

Dog::Dog(std::string& Type) {
	b = new Brain;
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
	delete b;
	std::cout << "Destructor called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "Bark Bark !!" << std::endl;
}
