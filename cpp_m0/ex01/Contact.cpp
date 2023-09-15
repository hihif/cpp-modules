/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:47:36 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 10:21:57 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"head.hpp"

Contact::Contact(void) {
	
}
Contact::~Contact(void) {
	
}

void	Contact::set_index(int id) {
	i = id;
}

void	Contact::add_new(int i) {
	this->i = i;
	std::cout << "Input this information about contact" << std::endl;
	this->first_name = get_line("First Name : ");
	this->last_name = get_line("Last Name : ");
	this->nickname = get_line("Nickname : ");
	this->phone_number = get_line("Phone Number : ");
	this->darkest_secret = get_line("Darkest Secret : ");
}

void	Contact::show(void) {
	std::cout << std::right;
	std::cout << std::setw(10) << this->i << " | ";
	std::cout << std::setw(10) << std::left << (this->first_name.length() > 10 ? this->first_name.substr(0, 9) + '.' : this->first_name) << " | ";
	std::cout << std::setw(10) << std::left << (this->last_name.length() > 10 ? this->last_name.substr(0, 9) + '.' : this->last_name) << " | ";
	std::cout << std::setw(10) << std::left << (this->nickname.length() > 10 ? this->nickname.substr(0, 9) + '.' : this->nickname) << std::endl;
}

void	Contact::show_one(void) {
	std::cout << "\n";
    std::cout << std::setw(14) << "Index" << " | " << this->i << std::endl;
    std::cout << std::setw(14) << "First Name" << " | " << this->first_name << std::endl;
    std::cout << std::setw(14) << "Last Name" << " | " << this->last_name << std::endl;
    std::cout << std::setw(14) << "Nickname" << " | " << this->nickname << std::endl;
    std::cout << std::setw(14) << "Darkest Secret" << " | " << this->darkest_secret << std::endl;
	std::cout << "\n";
}

