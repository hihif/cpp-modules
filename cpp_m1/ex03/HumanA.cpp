/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:52:08 by fhihi             #+#    #+#             */
/*   Updated: 2023/07/21 21:47:02 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"HumanA.hpp"

void	HumanA::attack( void ) {
	std::cout << this->Name << " attacks with their " << this->weapon.getType() << std::endl;
}