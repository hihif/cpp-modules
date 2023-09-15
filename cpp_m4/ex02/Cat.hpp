/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:15:19 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/20 20:49:33 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include"Animal.hpp"

class Cat : public AAnimal {
private:
	Brain	*b;
public:
	Cat(void);
	Cat(std::string& Type);
	Cat& operator=(Cat& other);
	~Cat(void);

	void	makeSound(void) const ;
};

#endif