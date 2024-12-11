/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:16:27 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/11 14:48:51 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "Weapon default constructor called" << std::endl;
}

Weapon::Weapon(std::string weapon_type) : _type(weapon_type)
{
	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructor called" << std::endl;
}

const std::string	&Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}
