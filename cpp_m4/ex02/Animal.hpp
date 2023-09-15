/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:33:04 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/18 15:55:31 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include"Brain.hpp"

class AAnimal {
protected:
	std::string type;

public:
	AAnimal(void);
	AAnimal(std::string& Type);
	AAnimal& operator=(AAnimal& other);
	virtual	~AAnimal(void);

	std::string	getType(void) const ;
	virtual	void	makeSound(void) const  = 0;
};

#endif