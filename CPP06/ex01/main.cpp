/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 10:28:11 by vintran           #+#    #+#             */
/*   Updated: 2022/01/30 10:42:39 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "data.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	raw = reinterpret_cast<uintptr_t>(ptr);

	return (raw);
}

Data*	deserialize(uintptr_t raw)
{
	Data *	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

int	main()
{
	Data *      data = new Data;
	uintptr_t   raw;

	data->value = 42;
	std::cout << data->value << std::endl;
	std::cout << data << std::endl;
	
	raw = serialize(data);
	data = deserialize(raw);

	std::cout << data->value << std::endl;
	std::cout << data << std::endl;

	delete data;

	return (0);
}