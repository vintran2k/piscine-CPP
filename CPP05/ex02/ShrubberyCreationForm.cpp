/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:43:42 by vintran           #+#    #+#             */
/*   Updated: 2022/01/18 13:37:14 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("shrubbery creation", 145, 137, "Undefined")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137, target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return (*this);
}

bool					ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream		o;
	std::string const	file = this->_target + "_shrubbery";

	try
	{
		Form::execute(executor);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
	o.open(file.c_str(), std::ofstream::trunc | std::ofstream::out);
	if (!o.is_open())
	{
		std::cerr << "ShrubberyCreationForm::execute: Can not open the file" << std::endl;
		return (false);
	}
	o	<< "                                                    .                                                        .        " << std::endl
		<< "                                         .         ;                                              .         ;         " << std::endl
		<< "            .              .              ;%     ;;                  .              .              ;%     ;;          " << std::endl
		<< "              ,           ,                :;%  %;                     ,           ,                :;%  %;           " << std::endl
		<< "               :         ;                   :;%;'     .,               :         ;                   :;%;'     .,    " << std::endl
		<< "      ,.        %;     %;            ;        %;'    ,;'       ,.        %;     %;            ;        %;'    ,;'     " << std::endl
		<< "        ;       ;%;  %%;        ,     %;    ;%;    ,%'           ;       ;%;  %%;        ,     %;    ;%;    ,%'       " << std::endl
		<< "         %;       %;%;      ,  ;       %;  ;%;   ,%;'             %;       %;%;      ,  ;       %;  ;%;   ,%;'        " << std::endl
		<< "          ;%;      %;        ;%;        % ;%;  ,%;'                ;%;      %;        ;%;        % ;%;  ,%;'          " << std::endl
		<< "           `%;.     ;%;     %;'         `;%%;.%;'                   `%;.     ;%;     %;'         `;%%;.%;'            " << std::endl
		<< "            `:;%.    ;%%. %@;        %; ;@%;%'                       `:;%.    ;%%. %@;        %; ;@%;%'               " << std::endl
		<< "               `:%;.  :;bd%;          %;@%;'                            `:%;.  :;bd%;          %;@%;'                 " << std::endl
		<< "                 `@%:.  :;%.         ;@@%;'                               `@%:.  :;%.         ;@@%;'                  " << std::endl
		<< "                   `@%.  `;@%.      ;@@%;                                   `@%.  `;@%.      ;@@%;                    " << std::endl
		<< "                     `@%%. `@%%    ;@@%;                                      `@%%. `@%%    ;@@%;                     " << std::endl
		<< "                       ;@%. :@%%  %@@%;                                         ;@%. :@%%  %@@%;                      " << std::endl
		<< "                         %@bd%%%bd%%:;                                            %@bd%%%bd%%:;                       " << std::endl
		<< "                           #@%%%%%:;;                                               #@%%%%%:;;                        " << std::endl
		<< "                           %@@%%%::;                                                %@@%%%::;                         " << std::endl
		<< "                           %@@@%(o);  . '                                           %@@@%(o);  . '                    " << std::endl
		<< "                           %@@@o%;:(.,'                                             %@@@o%;:(.,'                      " << std::endl
		<< "                       `.. %@@@o%::;                                            `.. %@@@o%::;                         " << std::endl
		<< "                          `)@@@o%::;                                               `)@@@o%::;                         " << std::endl
		<< "                           %@@(o)::;                                                %@@(o)::;                         " << std::endl
		<< "                          .%@@@@%::;                                               .%@@@@%::;                         " << std::endl
		<< "                          ;%@@@@%::;.                                              ;%@@@@%::;.                        " << std::endl
		<< "                         ;%@@@@%%:;;;.                                            ;%@@@@%%:;;;.                       " << std::endl
		<< "                     ...;%@@@@@%%:;;;;,..                                     ...;%@@@@@%%:;;;;,..                    " << std::endl;
		o.close();
		return (true);
}
