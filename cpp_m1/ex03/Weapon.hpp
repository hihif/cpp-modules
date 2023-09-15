/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:52:25 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 12:12:47 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>

class Weapon {
private:
	std::string type;
public:

	Weapon(const std::string& name)
		: type(name) {}
	~Weapon(void) {}
	std::string&	getType( void );
	void	setType(const std::string& newType);
};

#endif