/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 15:46:20 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/24 15:24:29 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHAGE_HPP
#define BITCOINEXCHAGE_HPP

#include<iostream>
#include<map>
#include<fstream>
#include <sstream>

typedef struct s_date {
	int	year, month, day;
}		t_date;

void	error_msg(std::string msg);
void	fillMap(std::map<std::string, float>& arr, std::ifstream& file);
void	search_print(std::map<std::string, float>& data, std::ifstream& file);

#endif