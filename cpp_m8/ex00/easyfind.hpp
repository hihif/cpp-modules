/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 15:54:32 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/09 11:20:35 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
int	easyfind(const T& cont, int n) {

	std::vector<T>::iterator it = std::find(cont.begin(), cont.end(), n);
	if (it == cont.end())
		throw std::runtime_error("No such number in container");
	return *it;
}

#endif