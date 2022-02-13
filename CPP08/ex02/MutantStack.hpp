/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 08:12:03 by vintran           #+#    #+#             */
/*   Updated: 2022/02/02 09:11:02 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template<typename T>
class		MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) {}
		MutantStack(MutantStack const & src) : std::stack<T>(src) {}
		virtual ~MutantStack(void) {}
		MutantStack<T> &   operator=(MutantStack const & rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return (*this);
		}

		typedef typename	std::stack<T>::container_type::iterator iterator;

		iterator    begin(void) { return (this->c.begin()); }
		iterator    end(void) { return (this->c.end()); }
};

#endif
