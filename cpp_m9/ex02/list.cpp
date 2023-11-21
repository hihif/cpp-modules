/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:30:00 by fhihi             #+#    #+#             */
/*   Updated: 2023/11/21 11:19:25 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.hpp"

llist::llist() : Data(0) {
}

llist::llist(list1 data) {
	Data = data;
	for (list1::iterator it = Data.begin(); it != Data.end(); it++) {
		list1 temp(1, *it);
		arr.push_back(temp);
		temp.clear();
	}
}

llist::llist(const llist& other) {
	*this = other;
}

llist& llist::operator=(const llist& other) {
	if (this != &other) {
		Data = other.Data;
		arr = other.arr;
	}
	return *this;
}

llist::~llist() {
	// Data.clear();
}

llist::list1 llist::set_pairs() {
    list1 tmp;
    list2 newArr;
    int size = arr.size();

    if (size % 2) {
        tmp = arr.back();
        arr.pop_back();
    }

    for (list2::iterator it = arr.begin(); it != arr.end();) {
        list1 tmp1;
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

void llist::splite() {
    list2 newArr;
    list1 temp1;
    list1 temp2;

    for (list2::iterator it = arr.begin(); it != arr.end(); ++it) {
        temp1.clear();
        temp2.clear();
        for (list1::iterator jt = it->begin(); jt != it->end(); ++jt) {
            if (std::distance(it->begin(), jt) < static_cast<long>(it->size() / 2))
                temp1.push_back(*jt);
            else
                temp2.push_back(*jt);
        }
        newArr.push_back(temp1);
        newArr.push_back(temp2);
    }
    arr = newArr;
}

static bool compare(std::list<int> first, std::list<int> second) {
    return (first.back() < second.back());
}

void llist::insertion(list1 rest) {
    list1 an;
    list1 bn;
    list2::iterator t;
    list2 main_chain;
    std::pair<list1, list2::iterator> pair;
    std::list< std::pair<list1, list2::iterator> > pend_pair;
    const size_t jacobsthal_diff[] = {
        2u, 2u, 6u, 10u, 22u, 42u, 86u, 170u, 342u, 682u, 1366u,
        2730u, 5462u, 10922u, 21846u, 43690u, 87382u, 174762u, 349526u, 699050u,
        1398102u, 2796202u, 5592406u, 11184810u, 22369622u, 44739242u, 89478486u,
    };

    splite();
	
    main_chain.push_back(arr.front());
    arr.pop_front();
    main_chain.push_back(arr.front());
    arr.pop_front();

    for (list2::iterator it = arr.begin(); it != arr.end(); it++) {
        bn = (*it);
        it++;
        an = (*it);
        t = main_chain.insert(main_chain.end(), an);
        pair.first = bn;
        pair.second = t;
        pend_pair.push_back(pair);
    }

    int jac_idx = 0;
    list2::iterator pos;
    while (!pend_pair.empty()) {
        std::list< std::pair<list1, list2::iterator> >::iterator start = pend_pair.begin();
        std::list< std::pair<list1, list2::iterator> >::iterator end = pend_pair.begin();

        for (size_t i = 0; i < jacobsthal_diff[jac_idx] - 1 && start != pend_pair.end(); i++)
            ++start;
        if (start == pend_pair.end())
            --start;
        while (1) {
            pos = std::lower_bound(main_chain.begin(), start->second, start->first, compare);
            t = main_chain.insert(pos, start->first);
            pend_pair.erase(start);
            if (start == end)
                break;
            start--;
        }
        jac_idx++;
    }
	
    if (!rest.empty()) {
		pos = std::lower_bound(main_chain.begin(), main_chain.end(), rest, compare);
        main_chain.insert(pos, rest);
    }

    arr = main_chain;
}

void	llist::flaten_arr() {
	Data.clear();
	for (list2::iterator it = arr.begin(); it != arr.end(); it++)
		Data.push_back((*it).back());
	arr.clear();
}

void llist::insertion_merge_sort() {
    list1 rest;
    rest = set_pairs();
    if (arr.size() >= 2)
        insertion_merge_sort();
    insertion(rest);
	if (arr.size() == Data.size())
		flaten_arr();
}

void	llist::print_data() {
	for(list1::iterator it = Data.begin(); it != Data.end(); it++)
		std::cout << *it << " ";
	std::cout << "\n";
}
