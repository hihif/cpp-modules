/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:25:31 by fhihi             #+#    #+#             */
/*   Updated: 2023/11/21 12:13:24 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"BitcoinExchange.hpp"

// ERROR MASSEGES
void	error_msg(std::string msg) {
	std::cout << "Error: " << msg << std::endl;
}

// Parsing fucntions
static bool is_valid_date(t_date d) {

    if (d.year < 0 || d.month < 1 || d.month > 12 || d.day < 1)
        return false;

    int maxDaysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0))
        maxDaysInMonth[2] = 29;

    return d.day <= maxDaysInMonth[d.month];
}

static bool	parse_date(std::string date) {
	std::istringstream dateStream(date);
	char	dash;

	t_date d;
	dateStream >> d.year >> dash >> d.month >> dash >> d.day;
	date = "bad input => " + date;
	if (dateStream && dateStream.eof() && is_valid_date(d))
		return (EXIT_SUCCESS);
	else
		return (error_msg(date), EXIT_FAILURE);
}

static bool	parse_value(float v) {
	if (v < 0)
		return (error_msg("not a positive number."), 1);
	else if (v > 1000)
		return (error_msg("too large a number."), 1);
	return (0);
}

//like ft_split helper function
static bool	split(std::string& input, char del, std::string &date, float& val) {
	std::map<int, std::string>	arr;
	std::string					token;
	std::string::iterator it;
	bool						n = true;
	int i = 0;

	if (input.empty())
		return false;
	for (it = input.begin(); it != input.end(); it++) {
		if (*it == del && n == false) {
			arr[i] = token;
			token.clear();
			i++;
			n = true;
		}
		else if (*it == del)
			n = true;
		else {
			token += *it;
			n = false;
		}
	}

	if (!token.empty()) {
		arr[i] = token;
		i++;
	}
	if (i > 3 || (del == ',' && i != 2))
		return (error_msg("Invalid line."), false);
	if (del == ',') {
		date = arr[0];
		val = std::strtof(arr[1].c_str(), NULL);
		return true;
	}
	if (del == ' ' && i < 3) {
		std::cout << "Error: bad input => " << input << std::endl;
		return false;
	}
	date = arr[0];
	if (!arr[2].empty())
		val = std::strtof(arr[2].c_str(), NULL);
	return true;
}

void	fillMap(std::map<std::string, float>& arr, std::ifstream& file) {
	std::string line;

	std::getline(file, line);
	while (std::getline(file, line)) {
		std::string	date;
		float		rate;
		if (split(line, ',', date, rate))
			arr[date] = rate;
	}
}

static void	print(const std::string& date, float value, float rate) {
	std::cout << date << " => " << value << " = " << (rate * value )<< std::endl;
}

void	search_print(std::map<std::string, float>& data, std::ifstream& file) {	
	std::string line;
	std::map<std::string, float>::iterator it;

	std::getline(file, line);
	while (std::getline(file, line)) {
		std::string	date;
		float		value;
		if (!split(line, ' ', date, value))
			continue;
		else if (parse_date(date) || parse_value(value))
			continue;
		else {
			it = data.begin();
			if (date < it->first) {
				std::cout << "Error: bad input => " << date << std::endl;;
				continue;
			}
			for (;it != data.end() && (*it).first < date; it++) {
			}
			if (it != data.end()) {
				if ((*it).first == date)
					print((*it).first, value, (*it).second);
				else {
					it--;
					print((*it).first, value, (*it).second);
				}
			}
		}
	}
}
