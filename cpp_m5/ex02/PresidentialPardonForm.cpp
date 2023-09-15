/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:41:44 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/15 20:45:34 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), Target(target) {
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other), Target(other.Target) {
	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	(void)other;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getIsSigned() == false)
		throw FormNotSigned();
	else if (executor.getGrade() <= this->getGradeToExe())
		std::cout << Target << " has been pardoned by Zaphod Beelebrox." << std::endl;
	else
		throw GradeTooLowException();
}
