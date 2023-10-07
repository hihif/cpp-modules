/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:56:08 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/02 10:15:29 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T &x, T &y) {
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template <typename T>
T	min(T &x, T &y) {
	if (x < y)
		return x;
	else
		return y;
}

template <typename T>
T	max(T &x, T &y) {
	if (x > y)
		return x;
	else
		return y;
}

#endif