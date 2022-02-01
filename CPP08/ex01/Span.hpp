/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 08:41:03 by vintran           #+#    #+#             */
/*   Updated: 2022/02/01 12:08:36 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class		Span
{
	public:
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);
		Span &		operator=(Span const & rhs);
		

		void				addNumber(int const nb);
		unsigned int		shortestSpan(void) const;
		unsigned int		longestSpan(void) const;
		void				addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		std::vector<int>	getArray(void) const;

	private:
		Span(void);
		unsigned int 		_N;
		std::vector<int>	_array;
		
};

std::ostream &	operator<<(std::ostream & o, Span const & rhs);

#endif
