/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:19:19 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/12 07:43:22 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
#include <cctype>

template< typename T >
void	swuare(T& x) {
	x = x * x;
}

// int main() {
// 	int a[] = {4, 2, 1, 13};
// 	::iter(a, 4, swuare);
// 	for (int i = 0; i < 4; i++)
// 		std::cout << a[i] << std::endl;
// }

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

int main() {
  int tab[] = { 0, 1, 2, 3, 4 };
//   double tab2[5];

  iter( tab, 5,	swuare<int> );
  iter( tab, 5, print<int> );

  return 0;
}