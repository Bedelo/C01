/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:37:42 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 19:24:39 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>


class HumanB {
	
public:
	HumanB(std::string nameB);
	~HumanB(void);

	void setWeapon(Weapon &weaponB);
	void attack(void) const;

private:
	std::string	_name;
	Weapon		*_weapon;

};

#endif