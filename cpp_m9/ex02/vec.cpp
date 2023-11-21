/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:48:32 by fhihi             #+#    #+#             */
/*   Updated: 2023/11/21 11:01:15 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vec.hpp"

vec::vec() : Data(0) {
}

vec::vec(vec1 data) {
	Data = data;
	for (vec1::iterator it = Data.begin(); it != Data.end(); it++) {
		vec1 temp(1, *it);
		arr.push_back(temp);
		temp.clear();
	}
}

vec::vec(const vec& other) {
	*this = other;
}

vec& vec::operator=(const vec& other) {
	if (this != &other) {
		Data = other.Data;
		arr = other.arr;
	}
	return *this;
}

vec::~vec() {
	// Data.clear();
}

vec::vec1	vec::set_pairs() {
	vec1 tmp;
	vec2 newArr;
	int size = arr.size();

	newArr.reserve(size / 2);
	if (size % 2) {
		tmp = arr.back();
		arr.pop_back();
	}

	for (vec2::iterator it = arr.begin(); it != arr.end();) {
		vec1 tmp1;
		for (int i = 0; i < 2; i++, it++) {
			if (i == 0)
				tmp1.insert(tmp1.begin(), (*it).begin(), (*it).end());
			else {
				if (tmp1.back() > (*it).back())
					tmp1.insert(tmp1.begin(), (*it).begin(), (*it).end());
				else
					tmp1.insert(tmp1.end(), (*it).begin(), (*it).end());
			}
		}
		newArr.push_back(tmp1);
	}
	arr = newArr;
	return (tmp);
}

void	vec::splite() {
	vec2 newArr;
	vec1 temp1;
	vec1 temp2;

	newArr.reserve(arr.size() * 2);
	for (size_t i = 0; i < arr.size(); i++) {
		temp1.clear();
		temp2.clear();
		for (size_t j = 0; j < arr[i].size(); j++) {
			if (j <  arr[i].size() / 2)
				temp1.push_back(arr[i][j]);
			else
				temp2.push_back(arr[i][j]);
		}
		newArr.push_back(temp1);
		newArr.push_back(temp2);
	}
	arr = newArr;
}

static	bool	compare(std::vector<int> first, std::vector<int> second)
{
	return (first.back() < second.back());
}

void	vec::update_iter(std::vector< std::pair<vec1, vec2::iterator> >& pend_pair, vec2::iterator t) {
	for (std::vector< std::pair<vec1, vec2::iterator> >::iterator it = pend_pair.begin(); it != pend_pair.end(); ++it) {
		if (it->second >= t)
			++(it->second);
	}
}

void	vec::insertion(vec1 rest) {
	vec1 an;
	vec1 bn;
	vec2::iterator t;
	vec2 main_chain;
	vec2 pend;
	std::pair<vec1, vec2::iterator> pair;
	std::vector< std::pair<vec1, vec2::iterator> > pend_pair;
	const size_t jacobsthal_diff[] = {
        2u, 2u, 6u, 10u, 22u, 42u, 86u, 170u, 342u, 682u, 1366u,
        2730u, 5462u, 10922u, 21846u, 43690u, 87382u, 174762u, 349526u, 699050u,
        1398102u, 2796202u, 5592406u, 11184810u, 22369622u, 44739242u, 89478486u,
    };	
	
	splite();

	main_chain.reserve(arr.size() + 1);
	pend_pair.reserve(arr.size());

	main_chain.push_back(arr[0]);
	main_chain.push_back(arr[1]);
	
	for (vec2::iterator it = arr.begin() + 2; it != arr.end(); it+=2) {
		bn = (*it);
		an = *(it + 1);
		t = main_chain.insert(main_chain.end(), an);
		pair.first = bn;
		pair.second = t;
		pend_pair.push_back(pair);
	}

	if (!rest.empty()) {
		pair.first = rest;
		pair.second = main_chain.end();
		pend_pair.insert(pend_pair.end(), pair);
	}

	int jac_idx = 0;
	while (pend_pair.size()) {
		std::vector< std::pair<vec1, vec2::iterator> >::iterator start  = pend_pair.begin();
		std::vector< std::pair<vec1, vec2::iterator> >::iterator end  = pend_pair.begin();
		
		for(size_t i = 0; i < jacobsthal_diff[jac_idx] - 1 && start != pend_pair.end(); i++)
			start++;
		if (start == pend_pair.end())
			start--;
		vec2::iterator pos;
		while (1) {
			pos = std::lower_bound(main_chain.begin(), start->second, start->first, compare);
			t = main_chain.insert(pos, start->first);
			update_iter(pend_pair, t);
			pend_pair.erase(start);
			if (start == end)
				break;
			start--;
		}
		jac_idx++;
	}

	arr = main_chain;
}

void	vec::flaten_arr() {
	Data.clear();
	for (vec2::iterator it = arr.begin(); it != arr.end(); it++)
		Data.push_back((*it).back());
	arr.clear();
}

void	vec::insertion_merge_sort() {
	vec1 rest;
	rest = set_pairs();
	if (arr.size() >= 2)
		insertion_merge_sort();
	insertion(rest);
	if (arr.size() == Data.size())
		flaten_arr();
}

void	vec::print_data() {
	for(vec1::iterator it = Data.begin(); it != Data.end(); it++)
		std::cout << *it << "\n";
	std::cout << "\n";
}
