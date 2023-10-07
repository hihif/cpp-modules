/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:18:56 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/02 10:38:15 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename Func>
void	iter(T* arr, int len, Func func) {
	for (int i = 0; i < len; i++)
		arr[i] = func(arr[i]);
}

#endif