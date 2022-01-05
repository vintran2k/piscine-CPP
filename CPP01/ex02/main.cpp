/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:40:23 by vintran           #+#    #+#             */
/*   Updated: 2022/01/03 16:00:40 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;
	
	std::cout	<< &string << std::endl
				<< stringPTR << std::endl
				<< &stringREF << std::endl;

	std::cout	<< *stringPTR << std::endl
				<< stringREF << std::endl;
	return (0);
}
