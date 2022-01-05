/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:11:43 by vintran           #+#    #+#             */
/*   Updated: 2022/01/05 15:07:27 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen	karen;
	enum	level_enum{DEBUG, INFO, WARNING, ERROR};
	int		level_id;
	
	if (ac != 2)
	{
		std::cerr << "Usage: <LOG_LEVEL>" << std::endl;
		return (1);
	}

	for (level_id = 0; level_id < 4; level_id++)
		if (karen.getLevel(level_id) == av[1])
			break;
	switch	(level_id)
	{
		case DEBUG:
			karen.complain("DEBUG");
		case INFO:
			karen.complain("INFO");
		case WARNING:
			karen.complain("WARNING");
		case ERROR:
			karen.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
	
	return (0);
}
