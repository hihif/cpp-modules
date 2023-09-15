/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:14:12 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/02 10:46:51 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include<iostream>
#include"Form.hpp"
class Form;

class Bureaucrat
{
private:
	const std::string Name;
	int Grade;
public:
	Bureaucrat( std::string name, int grade);
	Bureaucrat& operator=( const Bureaucrat& other);
	Bureaucrat( const Bureaucrat& other);
	~Bureaucrat();

	const std::string& getName() const;
	int getGrade() const;

	class GradeTooHighException : public std::exception {
	public:
		virtual const char	*what() const throw (){
			return "Grade too High";
		}
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char	*what() const throw (){
			return "Grade too Low";
		}
	};

	void	increment(void);
	void	decrement(void);
	bool	signForm(const Form& f);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif