/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:20:18 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 10:27:35 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"head.hpp"

void	options(void) {
	std::cout << "These are the availeble options for you" << std::endl;
	std::cout << "ADD  -  SEARCH  -  EXIT" << std::endl;
}

std::string	get_line(const std::string str) {
	bool check = false;
	std::string	input = "";

	while (!check)
	{
		std::cout << str;
		
		if (!std::getline(std::cin, input))
			exit(0);
		if (std::cin.good() && !input.empty())
			check = true;
		else
			std::cout << "Invalid argument. PLS try again" << std::endl;
	}
	return (input);
}

int main () {
	PhoneBook book;
	std::string input;
	options();
	getline(std::cin, input);
	while (input != "EXIT")
	{
		if (input == "ADD")
			book.add_contact();
		if (input == "SEARCH")
			book.show();
		options();
		getline(std::cin, input);
	}
	return (0);
}
