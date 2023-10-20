/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:48:50 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/11 15:14:32 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include"iostream"

class ScalarConverter {
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	ScalarConverter&	operator=(const ScalarConverter& other);
	~ScalarConverter();

	static void	convert(std::string str);
};

#endif