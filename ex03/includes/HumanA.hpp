/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:15:59 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/31 12:39:39 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "../includes/Weapon.hpp"
#include <string>

class	HumanA
{
	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);
		void	attack(void) const;

	private:
		std::string	_name;
};

#endif
