/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 05:27:07 by vintran           #+#    #+#             */
/*   Updated: 2022/01/30 08:28:45 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

void	get_type(std::string const &str);

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./conversion <value>" << std::endl;
		return (1);
	}

	get_type(av[1]);

	return (0);
}
