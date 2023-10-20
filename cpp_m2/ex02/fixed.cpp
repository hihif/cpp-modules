/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:28:24 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/12 09:53:40 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"fixed.hpp"


Fixed::Fixed() : x(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : x(other.x) {
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int i): x(i * pow(2, frac)) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : x((f + 0.5 / pow(2, frac)) * pow(2, frac)) {
	// std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other) {
	// std::cout << "Copy assignment operator called" << std::endl;
        x = other.x;
    return *this;
}

Fixed Fixed::operator+(const Fixed &other) const {
	return Fixed(this->toFloat() + other.toFloat());
}
Fixed Fixed::operator-(const Fixed &other) const {
	return Fixed(x - other.x).toFloat();
}
Fixed Fixed::operator*(const Fixed &other) const {
	return Fixed(this->toFloat() * other.toFloat());
}
Fixed Fixed::operator/(const Fixed &other) const {
	if (other.x == 0)
		std::invalid_argument("MATH: وا العداااااب\n");
	return Fixed(x / other.x).toFloat();
}

bool Fixed::operator==(const Fixed& other) const {
    return (x == other.x);
}

// Not equal to
bool Fixed::operator!=(const Fixed& other) const {
    return !(*this == other);
}

// Less than
bool Fixed::operator<(const Fixed& other) const {
    if (x < other.x) {
        return true;
    }
        return false;
}

// Less than or equal to
bool Fixed::operator<=(const Fixed& other) const {
    return *this < other || *this == other;
}

// Greater than
bool Fixed::operator>(const Fixed& other) const {
    return !(*this <= other);
}

// Greater than or equal to
bool Fixed::operator>=(const Fixed& other) const {
    return !(*this < other);
}

Fixed&	Fixed::operator++() {
	this->x++;
	return (*this);
}
Fixed&	Fixed::operator--() {
	this->x--;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	this->x++;
	return (tmp);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);

	this->x--;
	return (tmp);
}


Fixed::~Fixed() {
	// std::cout << "\x1B[31mDestructor called\x1B[0m" << std::endl;
}

int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits member function called" << std::endl;
    return x;
}

void Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits member function called" << std::endl;
    x = raw;
}

float Fixed::toFloat(void) const {
    return static_cast<float>(x) / pow(2, frac);
}

int Fixed::toInt(void) const {
    return x / pow(2, frac);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if (a < b)
		return b;
	return a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if (a > b)
		return b;
	return a;
}

std::ostream& operator<<(std::ostream &out, const Fixed &f) {
    out << f.toFloat();
    return out;
}
