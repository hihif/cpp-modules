/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:24:50 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/15 20:39:44 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), Target(target) {
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other), Target(other.Target) {
	
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	(void)other;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getIsSigned() == false)
		throw FormNotSigned();
	else if (executor.getGrade() <= this->getGradeToExe()) {
    	std::ofstream file( this->getName() + "_shrubbery" );
		file << "                ----+" << std::endl;
    	file << "               /    \\" << std::endl;
    	file << "           ---*      *---" << std::endl;
    	file << "          /    \\    /    \\" << std::endl;
    	file << "        -*      +  +      *-" << std::endl;
    	file << "       /  \\    / \\/ \\    /  \\" << std::endl;
    	file << "      +    *  *    *  *    +" << std::endl;
    	file << "     / \\  / \\/ \\  / \\/ \\  / \\" << std::endl;
    	file << "    -   ++     -*  +   ++   -" << std::endl;
    	file << "   / \\ /  \\   /  \\/  \\ / \\ / \\" << std::endl;
    	file << "  *  *+   *  +   *    *+  *  * " << std::endl;
    	file << " / \\/ \\/ \\/ \\/ \\/ \\/ \\/ \\/ \\/" << std::endl;
    	file << "x  y  z  w  a  b  c  d  e  f  g  h" << std::endl;
		file.close();
	}
	else
		throw GradeTooLowException();
}
