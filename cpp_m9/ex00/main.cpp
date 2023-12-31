/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 10:13:20 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/24 15:22:17 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main (int ac, char *av[]) {
	std::map<std::string, float> arr;

	if (ac != 2)
		return (error_msg("could not open file."), 1);
	std::ifstream file("data.csv");
	if (!file)
		return (error_msg("Can't find DataBase.\nIt must be in current directory and named \"data.csv\"."), 1);
	std::ifstream file1(av[1]);
	if (!file1)
		return (error_msg("could not open file."), 1);
	fillMap(arr, file);
	search_print(arr, file1);
	return (0);
}