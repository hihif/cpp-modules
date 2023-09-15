/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:46:22 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 10:58:41 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main() {
	Zombie *first;
	first = newZombie("fouad");
	first->announce();
	randomChump("hihi");

	delete(first);
	return (0);
}
