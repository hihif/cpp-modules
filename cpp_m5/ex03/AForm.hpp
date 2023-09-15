/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:21:38 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/15 20:38:07 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include"Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string	Name;
	bool				isSigned;
	const int			GradeToSign;
	const int			GradeToExe;
	
	Form();

public:
	Form(std::string name, int gts, int gte);
	Form& operator=( const Form& other);
	Form( const Form& other);
	virtual ~Form();

	std::string	getName() const;
	bool		getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExe() const;
	
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

	class FormNotSigned  : public std::exception {
	public:
		virtual const char	*what() const throw (){
			return "Form Not Signed";
		}
	};

	void			beSigned(Bureaucrat& b);
	virtual void	execute(Bureaucrat const & executor) const = 0;

};

std::ostream& operator<<(std::ostream& out, const Form& f);

#endif