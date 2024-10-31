/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:16:20 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/31 15:49:09 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB constructeur called" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB destructor called" << std::endl;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->weapon_type->getType();
	std::cout << std::endl;
}

void	HumanB::setWeapon(Weapon weapon)
{
	*this->weapon_type = weapon;
}
