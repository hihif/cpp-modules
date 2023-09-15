/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:52:23 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 12:12:41 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

std::string&	Weapon::getType( void )  {
	return (this->type);
}

void	Weapon::setType(const std::string& newType) {
	this->type = newType;
}
