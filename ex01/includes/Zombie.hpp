/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 09:58:22 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/31 11:35:51 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <new>

class Zombie
{
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void	announce(void) const;
		void	setName(std::string name);

	private:
		std::string	_name;
};

// Zombie	*newZombie(std::string name);
// void	randomChump(std::string name);
Zombie	*zombieHorde(int N, std::string name);

#endif
