/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:26:12 by fhihi             #+#    #+#             */
/*   Updated: 2023/11/21 11:36:58 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"PmergeMe.hpp"

void	number(char *s) {
	int	i = 0;

	while (s[i]) {
		if (!isdigit(s[i]))
			throw std::invalid_argument("There is NON Number !!");
		i++;
	}
}

void	check_vec(std::vector<int>& data, int n) {
	std::vector<int>::iterator it;

	if (n < 0)
		throw std::invalid_argument("Negative Number !!");
	it = std::find(data.begin(), data.end(), n);
	if (it != data.end())
		throw std::invalid_argument("there is a repeated number !!");
}

std::vector<int>	parse_vec(int ac, char *av[]) {
	std::vector<int> data;
	int temp;

	for(int i = 1; i < ac ; i++) {
		number(av[i]);
		temp = std::atoi(av[i]);
		check_vec(data, temp);
		data.push_back(temp);
	}
	return data;
}

void	check_list(std::list<int>& data, int n) {
	std::list<int>::iterator it;

	if (n < 0)
		throw std::invalid_argument("Negative Number !!");
	it = std::find(data.begin(), data.end(), n);
	if (it != data.end())
		throw std::invalid_argument("there is a repeated number !!");
}

std::list<int>	parse_list(int ac, char *av[]) {
	std::list<int> data;
	int temp;

	for(int i = 1; i < ac ; i++) {
		number(av[i]);
		temp = std::atoi(av[i]);
		check_list(data, temp);
		data.push_back(temp);
	}
	return data;
}

void	init(int ac, char *av[]) {
	try {
		std::vector<int> v1 = parse_vec(ac, av);
		std::list<int> v2 = parse_list(ac, av);
		
		PmergeMe	algo_v(v1);
		PmergeMe	algo_l(v2);
		
		algo_l.FordJonhsonSort();
		algo_v.FordJonhsonSort();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}

int main(int ac, char *av[]) {
	if (ac < 3) {
		std::cout << "No enough elements !!" << std::endl;
		return (0);
	}
	init(ac, av);
	return (0);
}

