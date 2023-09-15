/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:28:50 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/20 20:50:01 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
#define Dog_HPP

#include"Animal.hpp"

class Dog : public Animal {
public:
	Dog(void);
	Dog(std::string& Type);
	Dog& operator=(Dog& other);
	~Dog(void);

	void	makeSound(void) const ;
};

#endif