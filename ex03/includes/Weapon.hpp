/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:16:10 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/31 12:32:00 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class	Weapon
{
	public:
		Weapon(std::string weapon_type);
		~Weapon(void);
		std::string	&getType(void) const;
		void		setType(std::string new_type);

	private:
		std::string	_type;
};

#endif
