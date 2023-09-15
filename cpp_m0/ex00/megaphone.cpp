/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 12:52:42 by fhihi             #+#    #+#             */
/*   Updated: 2023/06/19 19:44:10 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

void	to_upper(std::string str) {
	for (int i = 0; str[i] != '\0'; i++) {
		str[i] = std::toupper(str[i]);
	}
	std::cout << str;
}

int main(int ac, char **av) {
	int i = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < ac)
		to_upper(av[i++]);
	std::cout << std::endl;
	return (0);
}
