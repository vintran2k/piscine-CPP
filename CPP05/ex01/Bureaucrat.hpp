/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:10:19 by vintran           #+#    #+#             */
/*   Updated: 2022/01/18 07:25:28 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class		Form;

class		Bureaucrat
{
	public:
		Bureaucrat(std::string const name, unsigned int grade);
		Bureaucrat(Bureaucrat const & src);
		virtual	~Bureaucrat(void);
		std::string const 	getName(void) const;
		unsigned int		getGrade(void) const;
		Bureaucrat &		operator=(Bureaucrat const & rhs);

		void				increaseGrade(void);
		void				decreaseGrade(void);
		void				signForm(Form & form);

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
		std::string const	_name;
		unsigned int		_grade;
		Bureaucrat(void);
};

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
