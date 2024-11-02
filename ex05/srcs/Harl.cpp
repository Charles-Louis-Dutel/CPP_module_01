/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:33:36 by cdutel            #+#    #+#             */
/*   Updated: 2024/11/02 16:22:19 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl destructor called" << std::endl;
}

void	Harl::_debug(void)
{
	std::cout << "DEBUG : ";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !";
	std::cout << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "INFO : ";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger ! If you did, I wouldn\'t be asking for more !";
	std::cout << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "WARNING : ";
	std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "ERROR : ";
	std::cout << "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	void		(Harl::*f[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string	complain_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (complain_level[i] == level)
			(this->*f[i])();
	}
}

