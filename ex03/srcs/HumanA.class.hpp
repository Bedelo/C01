/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:37:34 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/16 13:16:49 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_CLASS_HPP
#define HUMAN_A_CLASS_HPP

#include "Weapon.class.hpp"
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