/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 09:56:05 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/02 10:17:45 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

// int main() {
// 	std::string f = "houad";
// 	std::string h = "hamza";
// 	std::cout << f << " and " << h << std::endl;
	
// 	std::cout << ::max(f, h) << f << " and " << h << std::endl;
// }

int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}