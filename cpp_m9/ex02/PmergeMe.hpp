/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:26:33 by fhihi             #+#    #+#             */
/*   Updated: 2023/11/21 11:07:55 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include "vec.hpp"
#include "list.hpp"
#include <type_traits>

class PmergeMe {
public:
	typedef std::chrono::high_resolution_clock chrono;
private:
	vec::vec1 vector_data;
	llist::list1 list_data;
	std::chrono::high_resolution_clock::time_point vec_duration;
	std::chrono::high_resolution_clock::time_point list_duration;
	
	PmergeMe();
public:
	PmergeMe(vec::vec1);
	PmergeMe(llist::list1);
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);
	~PmergeMe();

	void	FordJonhsonSort();
};

#endif