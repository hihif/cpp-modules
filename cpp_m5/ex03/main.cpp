/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:42:40 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/15 20:41:38 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Intern.hpp"

int main () {
	// try {
	// 	Bureaucrat f("fouad", 3);
	// 	RobotomyRequestForm r("hasan");
	// 	r.beSigned(f);
	// 	r.execute(f);
	// } catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	Bureaucrat h("howa", 2);
	// 	Form* form = Intern().makeForm("PresidentialPardonForm", "yes");
	// 	h.signForm(*form);
	// 	form->beSigned(h);
	// 	h.executeForm(*form);
	// 	delete form;
	// 	// while (1);
	// } catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	try {
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}