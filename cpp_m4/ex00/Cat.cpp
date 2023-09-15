/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:17:01 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/16 16:14:59 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "A Cat's Default constructor called" << std::endl;
}

Cat::Cat(std::string& Type) {
	std::cout << this->type << "Copy constructor called" << std::endl;
	this->type = Type;
}

Cat& Cat::operator=(Cat& other)
{
	std::cout << this->type << "Copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

Cat::~Cat(void) {
	std::cout << "A Cat's Destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "Meoow !!" << std::endl;
}