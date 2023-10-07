/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:37:24 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/26 15:54:17 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	
}

Serializer::~Serializer() {
	
}

Serializer::Serializer(const Serializer& other) {
	(void)other;
}

Serializer& Serializer::operator=(const Serializer& other) {
	(void)other;
	return *this;
}

uintptr_t Serializer::serialize(Data* ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data*>(raw));
}
