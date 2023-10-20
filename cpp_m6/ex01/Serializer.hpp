/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:34:46 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/11 15:22:06 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include "iostream"
typedef struct data {	
}				Data;

typedef unsigned long uintptr_t;

class Serializer {
private:
	
public:
	Serializer();
	Serializer(const Serializer& other);
	Serializer& operator=(const Serializer& other);
	~Serializer();
	
	uintptr_t serialize(Data* ptr);
	Data* deserialize(uintptr_t raw);
};

#endif