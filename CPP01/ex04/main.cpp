/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:49:20 by vintran           #+#    #+#             */
/*   Updated: 2022/01/04 18:16:31 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	error(std::string error_msg)
{
	std::cerr << error_msg << std::endl;
	return (1);
}

int	main(int ac, char **av)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	/*****************handle errors and open files*****************/
	if (ac != 4)
		return (error("Usage: <filename> <to_find> <to_replace>"));
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (filename.empty() || s1.empty() || s2.empty())
		return (error("Error: empty argument(s)"));
	
	std::ifstream	file(filename.c_str());
	if (!file.is_open())
		return (error("Cannot open the request file"));
	std::ofstream	replaceFile((filename + ".replace").c_str());
	if (!replaceFile.is_open())
	{
		file.close();
		return (error("Unable to create the replacement file"));
	}

	/***********************find and replace***********************/
	std::string	line;
	std::size_t	pos;
	std::size_t	len = s1.size();
	while (std::getline(file, line))
	{
		while ((pos = line.find(s1)) != std::string::npos)
		{
			line.erase(pos, len);
			line.insert(pos, s2);
		}
		replaceFile << line << std::endl;
	}
	file.close();
	replaceFile.close();

	return (0);
}
