/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:42:40 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/15 18:58:42 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AForm.hpp"
#include"Bureaucrat.hpp"
#include"PresidentialPardonForm.hpp"
#include"RobotomyRequestForm.hpp"
#include"ShrubberyCreationForm.hpp"

int main () {
	try {
		Bureaucrat f("fouad", 3);
		RobotomyRequestForm r("hasan");
		r.beSigned(f);
		r.execute(f);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat h("howa", 2);
		PresidentialPardonForm form("yes");
		h.signForm(form);
		form.beSigned(h);
		h.executeForm(form);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}