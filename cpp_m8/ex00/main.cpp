/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:01:51 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/07 16:13:05 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main () {
	std::vector<int> nb;
	nb.push_back(1);
	nb.push_back(2);
	nb.push_back(3);
	nb.push_back(4);
	nb.push_back(5);
	nb.push_back(6);
	nb.push_back(7);
	int n = 5;
	try
	{
		int res = easyfind(nb, n);
		std::cout << res << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}