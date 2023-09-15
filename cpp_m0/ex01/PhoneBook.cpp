/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:47:39 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 10:38:39 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"head.hpp"

void	PhoneBook::add_contact(void) {
	if (nb < 8)
	{
		all[nb].add_new(nb + 1);
		nb++;
	}
	else
	{
		for (int i = 1; i < 8; i++) {
			all[i - 1] = all[i];
			all[i - 1].set_index(i);
		}
		all[7].add_new(8);
	}
}

void	PhoneBook::show(void) {
	std::string index;
	int 		i = 0;

	this->show_all();
	std::cout << "\nEnter the Index of the contact you want" << std::endl;
	std::cout << "INDEX : " ;
	if (!getline(std::cin, index))
		exit(0);
	try {
		i = std::stoi(index);
	} catch(const std::exception& e) {
		std::cout << "Error " << e.what() << std::endl;
		return ;
	}
	while (1) {
		if (i > 0 && i < (nb + 1))
		{
			this->show_one(i);
			break ;
		}
		std::cout << "Enter a valid Index" << std::endl;
		std::cout << "INDEX : " ;
		if (!getline(std::cin, index))
			exit(0);
		try {
			i = std::stoi(index);
		} catch(const std::exception& e) {
			std::cout << "Error " << e.what() << std::endl;
			return ;
		}
	}
}

void	PhoneBook::show_all(void) {
	std::cout << "\n";
	std::cout << std::right;
    std::cout << std::setw(10) << "Index" << " | ";
    std::cout << std::setw(10) << "First Name" << " | ";
    std::cout << std::setw(10) << "Last Name" << " | ";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    std::cout << std::setfill('-') << std::setw(50) << "" << std::setfill(' ') << std::endl;
	for (int j = 0; j < nb; j++) {
		all[j].show();
	}
}

void	PhoneBook::show_one(int i) {
	for (int j = 0; j < nb; j++) {
		if (j == (i - 1))
			all[j].show_one();
	}
}
