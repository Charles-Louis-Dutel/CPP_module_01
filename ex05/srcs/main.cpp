/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:27:11 by cdutel            #+#    #+#             */
/*   Updated: 2024/11/02 16:23:22 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(void)
{
	Harl	complaining;

	std::cout << "Debug level" << std::endl;
	complaining.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "Info level" << std::endl;
	complaining.complain("INFO");
	std::cout << std::endl;

	std::cout << "Warning level" << std::endl;
	complaining.complain("WARNING");
	std::cout << std::endl;

	std::cout << "Error level" << std::endl;
	complaining.complain("ERROR");
	std::cout << std::endl;

	return (0);
}
