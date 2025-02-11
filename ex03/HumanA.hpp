/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:37:34 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 19:24:28 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>


class HumanA{
	
public:
	HumanA(std::string nameA, Weapon &weaponA);
	~HumanA(void);

	void attack(void) const;

private:
	std::string	_name;
	Weapon		&_weapon;	
		
};

#endif