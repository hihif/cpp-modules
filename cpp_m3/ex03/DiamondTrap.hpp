/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 20:08:05 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/07 10:30:42 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include"FragTrap.hpp"
#include"ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string Name;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap& operator=(const DiamondTrap &other);
	~DiamondTrap();

	using ScavTrap::attack;
	void whoAmI(void);
};

#endif