/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:12:07 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 12:29:55 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main() {
	Zombie *all;
	
	all = zombieHorde(5, "\x1B[34mfouad hihi\x1B[0m");
	for (int i = 0; i < 5; ++i) {
		// std::cout << "index :" << i;
		all[i].announce();
	}
	delete[] all;
	return (0);
}
