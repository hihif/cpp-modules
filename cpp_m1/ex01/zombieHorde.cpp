/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:12:48 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 11:08:21 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *zombies;
	
	zombies = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombies[i].set_name(name + std::to_string(i));
	}
	return (zombies);
}
