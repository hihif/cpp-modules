/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:38:35 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/15 20:39:57 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"

Form::Form(std::string name, int gts, int gte) : Name(name), GradeToSign(gts), GradeToExe(gte) {
	isSigned = false;
	if (GradeToSign < 1 || GradeToExe < 1)
		throw Form::GradeTooHighException();
	else if (GradeToSign > 150 || GradeToExe > 150)
		throw Form::GradeTooLowException();
}

Form& Form::operator=( const Form& other) {
	(void)other;
	return *this;
}

Form::Form( const Form& other)
 : Name(other.Name), GradeToSign(other.GradeToSign), GradeToExe(other.GradeToExe) {
	isSigned = false;
}

Form::~Form() {
	
}

std::string Form::getName() const {
	return this->Name;
}

bool	Form::getIsSigned() const {
	return this->isSigned;
}

int Form::getGradeToSign() const {
	return this->GradeToSign;
}

int Form::getGradeToExe() const {
	return this->GradeToExe;
}

void	Form::beSigned(Bureaucrat& b) {
	isSigned = b.signForm(*this);
}	

std::ostream& operator<<(std::ostream& out, const Form& f) {
    out << "Form's name is " << f.getName() << std::endl
	<< "is it signed ? : " << (f.getIsSigned()? "yes" : "no") << std::endl
	<< "grade required to sign = "<< f.getGradeToSign() << std::endl
	<< "grade required to execute = "<< f.getGradeToExe();
    return out;
}