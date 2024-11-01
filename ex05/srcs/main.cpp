/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:27:11 by cdutel            #+#    #+#             */
/*   Updated: 2024/11/01 17:46:30 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(void)
{
	Harl	complaining;

	std::cout << "Debug level" << std::endl;
	complaining.complain("debug");

	std::cout << "Info level" << std::endl;
	complaining.complain("info");

	std::cout << "Warning level" << std::endl;
	complaining.complain("warning");

	std::cout << "Error level" << std::endl;
	complaining.complain("error");

	return (0);
}
