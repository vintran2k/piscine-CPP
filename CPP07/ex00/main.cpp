/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:30:33 by vintran           #+#    #+#             */
/*   Updated: 2022/01/31 17:44:10 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int	main()
{
	int	a = 9;
	int	b = 1;
	char	c = 'a';
	char	d = 'z';

	std::cout << "a = " << a << "    b = " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << "    b = " << b << std::endl;

	std::cout << min<int>(a, b) << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << min(c, d) << std::endl;
	std::cout << max<char>(c, d) << std::endl;
	
	return (0);
}
