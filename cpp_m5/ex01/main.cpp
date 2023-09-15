/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:52:40 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/13 15:15:14 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"

int main () {
	Bureaucrat Hamza("Hamza", 44);
	try {
	Form paper("paper", 171, 44);
	} catch (const Form::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}
	Form contract("contract", 111, 111);
	std::cout << contract << std::endl;
	contract.beSigned(Hamza);
	std::cout << contract << std::endl;
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

