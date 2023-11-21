/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:47:05 by fhihi             #+#    #+#             */
/*   Updated: 2023/11/21 10:06:56 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_HPP
#define VEC_HPP

#include<vector>
#include<iostream>
#include<algorithm>

class vec {
public:
	typedef std::vector<int> 	vec1;
	typedef std::vector< vec1 > vec2; 
private:
	vec1 Data;
	vec2 arr;

	vec();
	void	splite();
	vec1	set_pairs();
	void	update_iter(std::vector< std::pair< vec1, vec2::iterator> >& pend_pair, vec2::iterator t);
	void	insertion(vec1 rest);
	void	flaten_arr();
public:
	vec(const vec1 data);
	vec(const vec& other);
	vec& operator=(const vec& other);
	~vec();

	void	insertion_merge_sort();
	void	print_data();
};

#endif