/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:48:19 by fhihi             #+#    #+#             */
/*   Updated: 2023/11/21 11:19:15 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_HPP
#define LIST_HPP

#include<list>
#include<iostream>
#include<algorithm>

class llist {
public:
	typedef std::list<int> 	list1;
	typedef std::list< list1 > list2; 
private:
	list1 Data;
	list2 arr;

	llist();
	void	splite();
	list1	set_pairs();
	void	insertion(list1 rest);
	void	flaten_arr();
public:
	llist(const list1 data);
	llist(const llist& other);
	llist& operator=(const llist& other);
	~llist();

	void	insertion_merge_sort();
	void	print_data();
};

#endif