/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:16:24 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/15 15:16:04 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fixed.hpp"


Fixed::Fixed() : x(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : x(other.x) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i): x(i * pow(2, frac)) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : x((f + 0.5 / pow(2, frac)) * pow(2, frac)) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
        x = other.x;
    return *this;
}

Fixed::~Fixed() {
	std::cout << "\x1B[31mDestructor called\x1B[0m" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
    return x;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
    x = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(x) / pow(2, frac);
}

int Fixed::toInt(void) const {
    return x / pow(2, frac);
}

std::ostream& operator<<(std::ostream &out, const Fixed &f) {
    out << f.toFloat();
    return out;
}
