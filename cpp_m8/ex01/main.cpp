/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:28:43 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/13 08:40:17 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

int main() {
	// try {
	// 	Span sp = Span(5);
	// 	sp.addNumber(6);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// 	sp.print();
	// } catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	try {
		Span b(20);
		srand(time(NULL));
		std::vector<int> range(15, rand());

		b.addNumber(43);
		b.addNumber(995);
		b.addNumber(211);
		std::cout << "longestSpan " << b.longestSpan() << std::endl;
		std::cout << "shortestSpan " << b.shortestSpan() << std::endl;
		b.print();
		b.addRange(range);
		std::cout << "longestSpan " << b.longestSpan() << std::endl;
		std::cout << "shortestSpan " << b.shortestSpan() << std::endl;
		b.print();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}