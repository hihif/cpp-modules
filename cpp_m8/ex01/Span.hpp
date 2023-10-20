/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:42:29 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/13 08:14:34 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>


class Span {
private:
	unsigned int N;
	unsigned int size_;
	std::vector<int> arr;
public:
	Span();
	Span(unsigned int n);
	Span(const Span& other);
	Span operator=(const Span& other);
	~Span();

	class fullArr : public std::exception {
	public:
		virtual const char	*what() const throw (){
			return ("Trying to add more then N elements !!");
		}
	};

	class enoughElements : public std::exception {
	public:
		virtual const char	*what() const throw (){
			return ("There is one or No elements in the arr !!");
		}
	};

	void			addNumber(int number);
	void			addRange(std::vector<int>& range);
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	void			print();
};

#endif