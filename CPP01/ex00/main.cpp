/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 16:57:26 by vintran           #+#    #+#             */
/*   Updated: 2022/01/03 14:52:44 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	on_stack("stack");
	Zombie	*on_heap = newZombie("heap");

	on_stack.announce();
	on_heap->announce();
	randomChump("stack2");
	delete on_heap;
	return (0);
}
