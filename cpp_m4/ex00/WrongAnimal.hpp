/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:18:10 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/16 15:18:29 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include<iostream>

class WrongAnimal {
protected:
	std::string type;

public:
	WrongAnimal(void);
	WrongAnimal(std::string& Type);
	WrongAnimal& operator=(WrongAnimal& other);
	~WrongAnimal(void);

	std::string	getType(void) const ;
	virtual	void	makeSound(void) const ;
};

#endif