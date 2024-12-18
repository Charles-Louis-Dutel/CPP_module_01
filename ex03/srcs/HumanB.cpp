/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:16:20 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/18 09:48:45 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon_type(NULL)
{
	std::cout << "HumanB constructeur called" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB destructor called" << std::endl;
}

void	HumanB::attack(void) const
{
	if (this->_weapon_type == NULL)
		std::cout << this->_name << " have no weapon to attack !" << std::endl;
	else
	{
		std::cout << this->_name << " attacks with their ";
		std::cout << this->_weapon_type->getType();
		std::cout << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon_type = &weapon;
}
