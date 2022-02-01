/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 22:16:04 by vintran           #+#    #+#             */
/*   Updated: 2022/01/31 22:28:23 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T const * array, size_t const lenght, void(*f)(T const & arg))
{
	for (size_t i = 0; i < lenght; i++)
		f(array[i]);
	return ;
}

template<typename T>
void	print(T const & a)
{
	std::cout << a << std::endl;
	return ;
}

#endif
