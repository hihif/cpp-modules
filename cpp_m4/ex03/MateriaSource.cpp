/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 12:08:27 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/21 15:22:08 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		mat[i] = nullptr;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
	for (int i = 0; i < 4; i++)
		this->mat[i] = other.mat[i];
	return *this;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
	*this = other;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if (mat[i])
			delete mat[i];
	}
}

void	MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!mat[i]) {
			mat[i] = m->clone();
			return ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; ++i) {
        if (mat[i] && mat[i]->getType() == type)
            return mat[i]->clone();
    }
    return nullptr; 
}
