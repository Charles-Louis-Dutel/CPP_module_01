/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:16:01 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/31 11:51:09 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(42, "BOB");
	for (int i = 0; i < 42; i++)
	{
		std::cout << "Zombie n°: " << i + 1;
		std::cout << " : ";
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
