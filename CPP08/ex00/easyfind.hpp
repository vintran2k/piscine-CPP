/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 08:09:51 by vintran           #+#    #+#             */
/*   Updated: 2022/02/01 08:25:28 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <stdexcept>

template<typename T>
typename T::iterator		easyfind(T & container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);

	if (it == container.end())
		throw std::invalid_argument("The value has not been found.");
	return (it);
}

#endif
