/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:31:16 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/27 17:00:38 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_H
#define RPN_H

#include <iostream>
#include <stack>

class RPN {
private:
	std::string		str;
	std::stack<int>	arr;

	void			addition();
	void			subtracting();
	void			multiplying();
	void			deviding();
public:
	RPN();
	RPN(std::string input);
	RPN(const RPN& other);
	RPN& operator=(const RPN& other);
	~RPN();

	class error : public std::exception {
	public:
		virtual const char	*what() const throw() {
			return "Error";
		}
	};

	void	print_result();
};

#endif