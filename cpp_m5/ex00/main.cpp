/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:52:40 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/01 14:59:41 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main () {
	// Bureaucrat Hamza("Hamza", 1111);
	Bureaucrat youssef("Youssef", 111);
	std::cout << youssef << std::endl;
	youssef.decrement();
	std::cout << youssef << std::endl;
	try {
		Bureaucrat amine("Amine", -1);
	}
	catch(const Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << '\n';
	}
	try {
		Bureaucrat samir("Samir", 155);
	}
	catch(const Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << '\n';
	}	
}

