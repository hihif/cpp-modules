/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 08:50:51 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/13 08:30:28 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : N(0), size_(0) {
}

Span::Span(unsigned int n) : N(n), size_(0) {
	arr.reserve(n);
}

Span::Span(const Span& other) {
	*this = other;
}

Span Span::operator=(const Span& other) {
	if (this != &other) {
		N = other.N;
		size_ = other.size_;
		arr = other.arr;
	}
	return *this;
}

Span::~Span() {
}

void	Span::addNumber(int number) {
	if (size_ == N)
		throw fullArr();
	arr.push_back(number);
	size_++;
}

void	Span::addRange(std::vector<int>& range) {
	if (range.size() + size_ > N)
		throw  fullArr();
	size_ += range.size();
	arr.insert(arr.end(), range.begin(), range.end());
}

unsigned int	Span::shortestSpan() {
	size_t max = UINT_MAX;
	if (size_ <= 1)
		throw enoughElements();
	std::sort(arr.begin(), arr.end());
	std::vector<int>::iterator t1 = arr.begin();
	t1++;
	for (;t1 != arr.end() && max; t1++) {
		size_t tmp = (*t1) - *(t1 - 1);
		if (tmp < max)
			max = tmp;
	}
	return (max);
}

unsigned int	Span::longestSpan() {
	if (size_ <= 1)
		throw enoughElements();
	std::sort(arr.begin(), arr.end());
	std::vector<int>::iterator t1 = arr.begin();
	std::vector<int>::iterator t2 = arr.end(); 
	--t2;
	int first = *t1;
	int last = *t2;
	return (last - first);
}

void	Span::print() {
	if (size_ < 1)
		throw std::exception();
	std::vector<int>::iterator it = arr.begin();
	for (size_t i = 0; i < size_; i++) {
		std::cout << "\' " << *it << " \'" << std::endl;
		it++;
	}
	return ;
}
