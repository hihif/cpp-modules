/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 20:06:19 by fhihi             #+#    #+#             */
/*   Updated: 2023/06/20 15:43:08 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

int main(int ac, char *av[]) {
	if (ac == 2)
	{
		Harl cl;
		cl.complain(av[1]);
	}
	return (0);
}
