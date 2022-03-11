/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:09:55 by vintran           #+#    #+#             */
/*   Updated: 2022/03/10 14:42:04 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base *	generate(void)
{
	Base *	base_ptr;

	std::srand(std::time(NULL));
	int i = std::rand() % 3;

	if (i == 0)
	{
		std::cout << "Base A has been generated" << std::endl;
		base_ptr = new A;
	}
	else if (i == 1)
	{
		std::cout << "Base B has been generated" << std::endl;
		base_ptr = new B;
	}
	else
	{
		std::cout << "Base C has been generated" << std::endl;
		base_ptr = new C;
	}
	return (base_ptr);
}

void	identify(Base * p)
{
	A *		a = dynamic_cast<A *>(p);
	B *		b = dynamic_cast<B *>(p);
	C *		c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "A" << std::endl;
	if (b != NULL)
		std::cout << "B" << std::endl;
	if (c != NULL)
		std::cout << "C" << std::endl;
	return ;
}

void	identify(Base & p)
{
	try
	{
		A &		a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (const std::exception & e) {}
	try
	{
		B &		b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (const std::exception & e) {}
	try
	{
		C &		c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (const std::exception & e) {}
	return ;
}

int	main()
{
	Base * random = generate();
	identify(random);
	identify(*random);
	
	Base * base = new Base;
	identify(base);
	identify(*base);

	delete random;
	delete base;

	return (0);
}
