/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:33:11 by vintran           #+#    #+#             */
/*   Updated: 2022/01/18 07:24:39 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class		Bureaucrat;

class		Form
{
	public:
		Form(std::string const name, unsigned int signGrade, unsigned int execGrade);
		Form(Form const & src);
		virtual ~Form(void);
		std::string const	getName(void) const;
		bool				getSigned(void) const;
		unsigned int		getSignGrade(void) const;
		unsigned int		getExecGrade(void) const;
		Form &				operator=(Form const & rhs);

		void				beSigned(Bureaucrat const & b);

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Grade is too high !");
				}
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("Grade is too low !");
				}
		};

	private:
		Form(void);
		std::string const	_name;
		bool				_signed;
		unsigned int const	_signGrade;
		unsigned int const	_execGrade;
		
		
};

std::ostream &		operator<<(std::ostream & o, Form const & rhs);

#endif
