/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:33:36 by cdutel            #+#    #+#             */
/*   Updated: 2024/11/02 17:20:38 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void)
{
	//std::cout << "Harl constructor called" << std::endl;
}

Harl::~Harl(void)
{
	//std::cout << "Harl destructor called" << std::endl;
}

void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do !" << std::endl;
	std::cout << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn\'t put enough bacon in my burger ! If you did, I wouldn\'t be asking for more !" << std::endl;
	std::cout << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I\'ve been coming for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	void		(Harl::*f[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string	complain_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;

	while (i < 4)
	{
		if (complain_level[i] == level)
			break;
		i++;
	}
	switch(i)
	{
		case 0:
			(this->*f[0])();
			/* fall through */

		case 1:
			(this->*f[1])();
			/* fall through */

		case 2:
			(this->*f[2])();
			/* fall through */

		case 3:
			(this->*f[3])();
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << std::endl;
			break;
	}
}

