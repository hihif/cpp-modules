/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:49:39 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/27 15:28:42 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"
#include"iostream"

// Orthodox Canonical Form
ScalarConverter::ScalarConverter() {
}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
	(void)other;
}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter& other) {
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter() {
}

// Converter Functions
static void	ConvertToChar(std::string str) {
	char	*s;
	double	r = std::strtod(str.c_str(), &s);
	
	if (strlen(s) > 1 || (strlen(s) == 1 && s[0] != 'f')) {
		std::cout << "impossible" << std::endl; return;
	}
	
	std::cout << r << '\n' << s << std::endl;
}

static void	ConvertToInt(std::string str) {

}

static void	ConvertToFloat(std::string str) {

}

static void	ConvertToDouble(std::string str) {

}

// Methods
void	ScalarConverter::convert(std::string str) {
	ConvertToChar(str);
	ConvertToInt(str);
	ConvertToFloat(str);
	ConvertToDouble(str);
}

int main () {
	ConvertToChar("a");
}