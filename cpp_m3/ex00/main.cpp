/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:04:36 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/03 15:49:43 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"

int main() {
	ClapTrap e1("hasan");
	ClapTrap e2("amine");
	ClapTrap e3("fouad");

	e1.attack("amine");
	e2.attack("fouad");
	e3.beRepaired(3);
	return 0;
}