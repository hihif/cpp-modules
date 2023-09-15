/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:45:55 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 11:04:43 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"
// this function allocates memory remember to delete it ;)
Zombie* newZombie( std::string name ) {
	Zombie *zombie;

	zombie = new Zombie;
	zombie->set_name(name);
	return (zombie);
}