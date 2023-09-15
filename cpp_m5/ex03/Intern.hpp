/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:07:18 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/15 20:38:56 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern& other);
	Intern& operator=(const Intern& other);
	~Intern();

	Form* PresidentialPardonFormInstance(std::string target);
	Form* ShrubberyCreationFormInstance(std::string target);
	Form* RobotomyRequestFormInstance(std::string target);

	Form*	makeForm(std::string formName, std::string target);
};

// typedef Form* (Intern::*t_funcPTR)(std::string&);

#endif