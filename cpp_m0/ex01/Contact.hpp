/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:48:53 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/14 10:21:50 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

class Contact {
private:
	int				i;
	std::string		phone_number;
	std::string		first_name;
	std::string		last_name;
	std::string		nickname;
	std::string		darkest_secret;
public:
	Contact();
	~Contact();
	void	set_index(int id);
	void	add_new(int i);
	void	show(void);
	void	show_one(void);
};

#endif