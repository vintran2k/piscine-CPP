/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 17:30:18 by vintran           #+#    #+#             */
/*   Updated: 2022/01/31 17:38:13 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T & a, T & b)
{
	T	tmp;
	
	tmp = a;
	a = b;
	b = tmp;

	return ;
}

template<typename T>
T const &	min(T const & a, T const & b)
{
	return (a < b ? a : b);
}

template<typename T>
T const &	max(T const & a, T const & b)
{
	return (a > b ? a : b);
}

#endif