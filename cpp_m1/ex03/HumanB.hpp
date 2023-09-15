/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:52:15 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 12:13:33 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Weapon.hpp"

class HumanB {
private:
    std::string Name;
    Weapon *weapon;
public:
    HumanB(const std::string& name)
		: Name(name), weapon(NULL) {}
    ~HumanB() {
		// delete weapon;
	}
    void setWeapon(Weapon& wpn);
    void attack();
};
