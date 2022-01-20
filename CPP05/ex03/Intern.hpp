/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:21:40 by vintran           #+#    #+#             */
/*   Updated: 2022/01/18 13:49:26 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class		Intern
{
	public:
		Intern(void);
		Intern(Intern const & src);
		virtual	~Intern(void);
		Intern &		operator=(Intern const & rhs);
		Form *			makeForm(std::string name, std::string target);
};

#endif
