/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:40:56 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/19 15:12:11 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include<iostream>

class Brain {
private:
	std::string	ideas[100];
public:
	Brain();
	Brain& operator=(const Brain& other);
	~Brain();
};

#endif