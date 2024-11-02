/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 17:27:11 by cdutel            #+#    #+#             */
/*   Updated: 2024/11/02 17:02:17 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong input, try with : ./HarlFilter \"complain_level\"";
		std::cerr << std::endl;
		return (1);
	}

	Harl	complaining;

	complaining.complain(argv[1]);
	return (0);
}
