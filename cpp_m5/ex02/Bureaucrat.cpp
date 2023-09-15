/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:21:12 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/15 20:45:11 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name), Grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other) {
	this->Grade = other.Grade;
	return *this;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other) {
	*this = other;
}

const std::string& Bureaucrat::getName() const {
    return Name;
}

int Bureaucrat::getGrade() const {
    return Grade;
}

void	Bureaucrat::increment(void) {
	Grade--;
}

void	Bureaucrat::decrement(void) {
	Grade++;
}

bool	Bureaucrat::signForm(const Form& f) {
	if (f.getGradeToSign() > this->Grade) {
		std::cout << this->Name << " signed " << f.getName() << std::endl;
		return true;
	}
	else {
		std::cout << this->Name << " couldn't sign " << f.getName()
		<< " because his grade is not high enough" << std::endl;
		return false;
	}
}

void	Bureaucrat::executeForm(Form const & form) {
	try {
		form.execute(*this);
		std::cout << this->Name << " executed " << form.getName() << std::endl;
	} catch (std::exception& e) {
        std::cout << this->Name << " can't execute " << form.getName() << ". Reason :\n" << e.what() << std::endl;	
	}
}

Bureaucrat::~Bureaucrat() {
	
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}
