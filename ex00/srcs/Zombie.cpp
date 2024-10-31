/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:58:56 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/31 10:53:50 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << _name << " constructor called";
	std::cout << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " destructor called";
	std::cout << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
}
