/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:04:36 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/07 15:44:06 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

int main() {
	ClapTrap e1("hasan");
	ScavTrap e2("amine");

	e1.attack("amine");
	e2.attack("fouad");
	e2.guardGate();
	e2.attack("hasan");

	return 0;
}