/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:01:19 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/11 15:16:02 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include "ScalarConverter.hpp"

int main (int ac, char *av[]) {
	ScalarConverter con;

	if (ac != 2)
		return (1);
	con.convert(av[1]);
	return (0);
}