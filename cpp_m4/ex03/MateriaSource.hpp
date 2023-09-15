/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:59:41 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/21 15:15:02 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOUCE_HPP
#define MATERIASOUCE_HPP

#include"IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria* mat[4];
public:
	MateriaSource();
	MateriaSource& operator=(const MateriaSource& other);
	MateriaSource(const MateriaSource& other);
	~MateriaSource();
	void	learnMateria(AMateria* m) ;
	AMateria* createMateria(std::string const & type) ;

};

#endif