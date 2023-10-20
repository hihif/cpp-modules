/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:49:39 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/11 15:18:15 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScalarConverter.hpp"
#include"iostream"
#include <iomanip>

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

	std::cout << "char : ";
	if ((r != 0 && strlen(s)) || strlen(s) > 1 || !str[0]) {
		std::cout << "impossible" << std::endl; return;
	}
	if ((r < 32 || r >= 127) && !s[0]) {
		std::cout << "Not Displayable" << std::endl; return;
	}
	if (s[0])
		std::cout << '\'' << static_cast<char>(s[0]) << '\'' << std::endl;
	else
		std::cout << '\'' << static_cast<char>(r) <<'\'' << std::endl;
}

static void	ConvertToInt(std::string str) {
	char	*s;
	double	r = std::strtod(str.c_str(), &s);

	std::cout << "int : ";
	if (!str[0] || strlen(s) > 1 || (s[0] && s[0] != 'f') || ((long)r < INT_MIN || (long)r > INT_MAX)) {
		std::cout << "impossible" << std::endl; return;
	}
	std::cout << static_cast<int>(r) << std::endl;
}

static int	precision(std::string& s) {
	int i = s.find('.');
	if (i == -1)
		return 1;
	return (s.length() - i - 1);
}

static void	ConvertToFloat(std::string str) {
	char	*s;
	double	r = std::strtod(str.c_str(), &s);

	std::cout << "float : ";
	if (!str[0] || strlen(s) > 1 || (s[0] && s[0] != 'f')) {
		std::cout << "impossible" << std::endl; return;
	}
	std::cout << std::fixed << std::setprecision(precision(str)) << static_cast<float>(r) << 'f' << std::endl;

}

static void	ConvertToDouble(std::string str) {
	char	*s;
	double	r = std::strtod(str.c_str(), &s);

	std::cout << "double : ";
	if (!str[0] || strlen(s) > 1 || (s[0] && s[0] != 'f')) {
		std::cout << "impossible" << std::endl; return;
	}
	std::cout << std::fixed << std::setprecision(precision(str)) << static_cast<double>(r)  << std::endl;
}

// Methods
void	ScalarConverter::convert(std::string str) {
	ConvertToChar(str);
	ConvertToInt(str);
	ConvertToFloat(str);
	ConvertToDouble(str);
}
