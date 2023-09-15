/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:46:47 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 11:03:11 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include"iostream"

class Zombie {
private:
	std::string Name;
public:
	Zombie();
	~Zombie();
	void	set_name(std::string name);
	void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
#endif