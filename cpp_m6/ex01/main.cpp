/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:47:48 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/26 16:00:49 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main () {
	Data *ptr = NULL;
	std::cout << ptr << std::endl;
	
	Serializer ser;
	
	uintptr_t uint_value = ser.serialize(ptr);

	Data *new_ptr;
	new_ptr = ser.deserialize(uint_value);
	
	std::cout << new_ptr << std::endl;
	return (0);
}