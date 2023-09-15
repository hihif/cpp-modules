/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:04:36 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/07 15:46:47 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"

int main() {
	ClapTrap e1("hasan");
	FragTrap e2("amine");
	FragTrap e3("fouad");

	e1.attack("amine");
	e2.attack("hasan");
	e3.beRepaired(10);
	e3.highFivesGuys();

	return 0;
}