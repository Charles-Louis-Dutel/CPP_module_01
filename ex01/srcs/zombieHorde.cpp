/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:16:27 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/31 11:38:43 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombs = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombs[i].setName(name);
	}
	return (zombs);
}
