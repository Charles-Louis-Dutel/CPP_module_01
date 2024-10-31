/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:58:39 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/31 11:02:59 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie *zombie1;

	zombie1 = newZombie("CARL");
	randomChump("BOB");
	zombie1->announce();
	delete(zombie1);
	return (0);
}
