/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:01:32 by vintran           #+#    #+#             */
/*   Updated: 2022/01/02 17:11:33 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "constructor Zombie" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "destructor Zombie" << std::endl;
	return ;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
