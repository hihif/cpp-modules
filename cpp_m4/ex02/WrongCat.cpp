/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:14:23 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/16 15:23:30 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "A Wrongcats Default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string& Type) {
	std::cout << this->type << "Copy constructor called" << std::endl;
	this->type = Type;
}

WrongCat& WrongCat::operator=(WrongCat& other)
{
	std::cout << this->type << "Copy assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

WrongCat::~WrongCat(void) {
	std::cout << "Destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "NOT Meoow !!" << std::endl;
}