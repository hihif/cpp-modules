/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 22:47:52 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/01 15:26:40 by fhihi            ###   ########.fr       */
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


Bureaucrat::~Bureaucrat() {
	
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return out;
}