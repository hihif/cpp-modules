/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:33:04 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/17 15:31:45 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>

class Animal {
protected:
	std::string type;

public:
	Animal(void);
	Animal(std::string& Type);
	Animal& operator=(Animal& other);
	virtual ~Animal(void);

	std::string	getType(void) const ;
	virtual	void	makeSound(void) const ;
};

#endif