/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:16:16 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/31 15:39:19 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), weapon_type(weapon)
{
	std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA destructor called" << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their ";
	std::cout << this->weapon_type.getType();
	std::cout << std::endl;
}
