/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:18:01 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 12:36:48 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string>
#include<iostream>
#include<fstream>

void	func(const std::string& fileName, const std::string& s1, const std::string& s2) {
	std::string newFile = fileName + ".replace";
	if (!s1[0] || !s2[0])
		return ;
	std::ifstream inFile(fileName);
	if (!inFile) {
		std::cout << "Invalid File" << std::endl;
		return ;
	}

	std::string fileContent((std::istreambuf_iterator<char>(inFile)), (std::istreambuf_iterator<char>()));
	inFile.close();

	size_t i = fileContent.find(s1);
	while (i != std::string::npos) {
		fileContent.erase(i, s1.length());
		fileContent.insert(i, s2);
		i = fileContent.find(s1, i + s2.length());
	}

	std::ofstream outFile(newFile);
	if (!outFile) {
		std::cout << "Unable to create new file" << std::endl;
		return ;
	}
	outFile << fileContent;
	std::cout << "\x1B[31mDone !!" << std::endl;
}

void	ft_help() {
	std::cout << "Execute this programe like this" << std::endl;
	std::cout << "./exe " << "\"file to read from\"" << " \"S1\"";
	std::cout << " \"S2\"" << std::endl;
	std::cout << " S1 and S2 should \x1B[31mNOT \x1B[0mbe empty!!" << std::endl;
}

int main(int ac, char *av[])
{
	if (ac == 4)
		func(av[1], av[2], av[3]);
	else
		ft_help();
	return (0);
}