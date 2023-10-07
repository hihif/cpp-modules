/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:26:14 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/18 13:39:23 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), Target(target) {
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other), Target(other.Target) {
	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	(void)other;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getIsSigned() == false)
		throw FormNotSigned();
	else if (executor.getGrade() <= this->getGradeToExe()) {
		std::srand(std::time(0));
		int i = std::rand();
		if ((i % 2) == 0)
			std::cout << "DRRRRRR " << Target << " has been robotomized successfully." << std::endl;
		else
			std::cout << "Failed to robotize " << Target << " ." << std::endl;
	}
	else
		throw GradeTooLowException();
}
