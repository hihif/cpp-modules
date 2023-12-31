/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:21:53 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/25 22:38:29 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>
#include"ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
	std::string type;
	AMateria() {}
public:
	AMateria(std::string const & type);
	AMateria& operator=(const AMateria& other);
	AMateria(const AMateria& other);
	virtual ~AMateria();

	std::string const & getType() const;
	// virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif