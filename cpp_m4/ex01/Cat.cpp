/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:17:01 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/16 15:44:35 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Cat.hpp"

Cat::Cat() {
	b = new Brain ;
	type = "Cat";
	std::cout << "A cats Default constructor called" << std::endl;
}

Cat::Cat(std::string& Type) {
	b = new Brain ;
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
	delete b;
	std::cout << "Destructor called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "Meoow !!" << std::endl;
}