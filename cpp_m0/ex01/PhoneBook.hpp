/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:47:37 by fhihi             #+#    #+#             */
/*   Updated: 2023/06/18 13:40:39 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include"Contact.hpp"

class	PhoneBook {
private: 
	Contact all[8];
	size_t	nb;
	void	show_one(int i);
	void	show_all(void);
public:
	PhoneBook(){
		nb = 0;
	}
	~PhoneBook(){}
	void	add_contact(void);
	void	show(void);
};

#endif
