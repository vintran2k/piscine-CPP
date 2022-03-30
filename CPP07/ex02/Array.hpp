/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 05:45:21 by vintran           #+#    #+#             */
/*   Updated: 2022/03/30 15:46:42 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class	Array
{
	public:
		Array(void) : _array(NULL), _size(0) {}
		Array(unsigned int n) : _array(new T[n]), _size(n) {}
		Array(Array const & src) : _array(NULL), _size(0) { *this = src; }
		~Array(void)
		{
			if (this->_array != NULL)
				delete [] _array;
		}

		Array &		operator=(Array const & rhs)
		{
			if (this != &rhs)
			{
				if (this->_size != 0 && this->_size != rhs._size && this->_array != NULL)
				{
					delete [] this->_array;
					this->_array = new T[rhs._size];
				}
				else if (_array == NULL)
					this->_array = new T[rhs._size];
				this->_size = rhs._size;
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = rhs._array[i];
			}
			return (*this);
		}
		T &			operator[](unsigned int const n) const
		{
			if (n >= this->_size)
				throw OutOfRange();
			else
				return (this->_array[n]);
		}
	
		class   OutOfRange : public std::exception
		{
			public:
				virtual const char *what() const throw() {
					return ("Out of range !");
				};
		};

		unsigned int	size(void) const { return (this->_size); }

	private:
		T *				_array;
		unsigned int	_size;
};

#endif
