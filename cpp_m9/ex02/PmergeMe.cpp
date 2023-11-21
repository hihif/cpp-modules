/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 15:18:33 by fhihi             #+#    #+#             */
/*   Updated: 2023/11/21 11:37:16 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(vec::vec1 data) {
	if (data.size() < 2)
		throw std::invalid_argument("Can't be sorted !!");
	vector_data = data;
}

PmergeMe::PmergeMe(llist::list1 data) {
	if (data.size() < 2)
		throw std::invalid_argument("Can't be sorted !!");
	list_data = data;
}

PmergeMe::PmergeMe(const PmergeMe& other) {
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other) {
		this->list_data = other.list_data;
		this->vector_data = other.vector_data;
	}
	return *this;
}

PmergeMe::~PmergeMe() {
	// vector_data.clear();
	// list_data.clear();
}

void	PmergeMe::FordJonhsonSort() {
	if (list_data.size() > 1) {
		chrono::time_point start_time = chrono::now();
		llist sort(list_data);
		
		std::cout << "Before: ";
		sort.print_data();
		
		sort.insertion_merge_sort();
		
		std::cout << "After:  ";
		sort.print_data();
		
		chrono::time_point end_time = chrono::now();
		
		std::cout << "Time to process a range of " << list_data.size();
		std::cout << " elements with std::list : " << (end_time - start_time).count();
		std::cout << " us" << std::endl;
	}
	else if (vector_data.size() > 1) {
		chrono::time_point start_time = chrono::now();
		vec sort(vector_data);
		
		sort.insertion_merge_sort();
		
		chrono::time_point end_time = chrono::now();
		
		std::cout << "Time to process a range of " << vector_data.size();
		std::cout << " elements with std::vector : " << (end_time - start_time).count();
		std::cout << " us" << std::endl;
	}
}
