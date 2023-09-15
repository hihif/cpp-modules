/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:52:10 by fhihi             #+#    #+#             */
/*   Updated: 2023/07/21 21:47:08 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

class HumanA {
private:
	std::string Name;
	Weapon&		weapon;
public:
	HumanA(const std::string& name, Weapon& wpnREF)
		: Name(name), weapon(wpnREF) {}
	~HumanA() {}
	void	attack( void );
};
