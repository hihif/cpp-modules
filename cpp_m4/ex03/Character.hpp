/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 15:08:30 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/21 15:19:50 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include"ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string Name;
	AMateria*	invenAdd[4];
	AMateria*	inventory[4];
public:
	Character();
	Character(std::string name);
	Character& operator=(const Character& other);
	Character(const Character& other);
	~Character();

	std::string const& getName(void) const ;
	void	equip(AMateria* m) ;
	void	unequip(int idx) ;
	void	use(int idx, ICharacter& target) ;
};

#endif