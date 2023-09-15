/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:22:38 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/15 20:42:54 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

Intern::Intern() {
}

Intern::Intern(const Intern& other) {
	(void)other;
}

Intern& Intern::operator=(const Intern& other) {
	(void)other;
	return *this;
}

Intern::~Intern() {
	
}

Form* Intern::PresidentialPardonFormInstance(std::string target) {
	return new PresidentialPardonForm(target);
}

Form* Intern::ShrubberyCreationFormInstance(std::string target) {
	return new RobotomyRequestForm(target);
}

Form* Intern::RobotomyRequestFormInstance(std::string target) {
	return new ShrubberyCreationForm(target);
}


Form*	Intern::makeForm(std::string formName, std::string target) {
	std::string names[] = { "presidential pardon", "robotomy request", "shrubbery creation" };
	Form* (Intern::*funcPTR[])(std::string target) = { &Intern::PresidentialPardonFormInstance,
														&Intern::RobotomyRequestFormInstance, 
														&Intern::ShrubberyCreationFormInstance };
	Form* form;

	for (int i = 0; i < 3; i++) {
		if (names[i] == formName) {
			form = (this->*funcPTR[i])(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		}
	}
	std::cout << "Form you requested : " << formName << " does not exist !!" << std::endl;
	return 0;
}
