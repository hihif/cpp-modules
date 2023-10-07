/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:19:19 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/02 18:14:25 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
#include <cctype>

int swuare(int x) {
	return (x * x);
}

int main() {
	int a[] = {4, 2, 1, 13};
	::iter(a, 4, swuare);
	for (int i = 0; i < 4; i++)
		std::cout << a[i] << std::endl;
}