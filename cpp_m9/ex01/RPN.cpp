/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:59:24 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/27 17:05:46 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"RPN.hpp"

void	RPN::addition() {
	int tmp;
	tmp = arr.top();
	arr.pop();
	// std::cout << arr.top() << " + " << tmp << "\n";
	tmp = tmp + arr.top();
	arr.pop();
	arr.push(tmp);
}

void	RPN::subtracting() {
	int tmp;
	tmp = arr.top();
	arr.pop();
	// std::cout << arr.top() << " - " << tmp << "\n";
	tmp = arr.top() - tmp;
	arr.pop();
	arr.push(tmp);
}

void	RPN::multiplying() {
	int tmp;
	tmp = arr.top();
	arr.pop();
	// std::cout << arr.top() << " * " << tmp << "\n";
	tmp = tmp * arr.top();
	arr.pop();
	arr.push(tmp);
}

void	RPN::deviding() {
	int tmp;
	tmp = arr.top();
		// throw error("Error : Can't devide by 0");
	arr.pop();
	// std::cout << arr.top() << " / " << tmp << "\n";
	if (arr.top() == 0)
		throw RPN::error();
	tmp = tmp / arr.top();
	arr.pop();
	arr.push(tmp);
}

static	int	isOpe(int c) {
	if (c == '-' || c == '+' || c == '/' || c == '*') 
		return 1;
	return 0;
}

RPN::RPN() : str("") {
}

RPN::RPN(std::string input) : str(input){
	std::string::iterator it;
	bool	check = false;

	if (input.empty())
		return ;
	for (it = str.begin(); it != str.end(); it++) {
		if (std::isdigit(*it) && check == false) {
			arr.push(*it - 48);
			check = true;
		}
		else if (isOpe(*it) && arr.size() > 1 && check == false) {
			if (*it == '+')
				addition();
			else if (*it == '-')
				subtracting();
			else if (*it == '/')
				deviding();
			else if (*it == '*')
				multiplying();
			check = true;
		}
		else if (*it == ' ' && check == true)
			check = false;
		else
			throw RPN::error();
	}
	if (arr.size() != 1)
		throw RPN::error();
}

RPN::RPN(const RPN& other) {
	*this = other;
}

RPN& RPN::operator=(const RPN& other) {
	if (this != &other) {
		this->str = other.str;
		this->arr = other.arr;
	}
	return *this;
}

RPN::~RPN() {
}

void	RPN::print_result() {
	if (arr.size())
		std::cout << arr.top() << std::endl;
}