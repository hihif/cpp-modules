/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 15:01:28 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/02 10:54:59 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include"Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string Name;
	bool isSigned;
	const int	GradeToSign;
	const int	GradeToExe;
public:
	Form(std::string name, int gts, int gte);
	Form& operator=( const Form& other);
	Form( const Form& other);
	~Form();

	std::string getName() const;
	bool	getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExe() const;
	
	class GradeTooHighException : public std::exception {
	public:
		virtual const char	*what() const throw (){
			return "Form's grade too High";
		}
	};

	class GradeTooLowException : public std::exception {
	public:
		virtual const char	*what() const throw (){
			return "Form's grade too Low";
		}
	};

	void	beSigned(Bureaucrat& b);

};

std::ostream& operator<<(std::ostream& out, const Form& f);

#endif