/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:18:56 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/12 07:40:12 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename Func>
void	iter(T* arr, size_t len, Func func) {
	for (size_t i = 0; i < len; i++)
		func(arr[i]);
}

#endif