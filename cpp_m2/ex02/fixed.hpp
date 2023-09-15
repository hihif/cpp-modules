/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:56:25 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/15 15:41:34 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FEXED_HPP
#define FEXED_HPP

#include<iostream>
#include<cmath>

class Fixed
{
private:
	int x;
	static const int frac = 8;
public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed(const int i);
	Fixed(const float f);
	Fixed& operator=(const Fixed &other);
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>(const Fixed &other) const;
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;
	static const Fixed& max(const Fixed& a, const Fixed& b);
	static const Fixed& min(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream &out, const Fixed &f);

#endif