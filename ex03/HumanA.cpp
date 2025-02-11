/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:37:38 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 16:19:14 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string nameA, Weapon &weaponA): _name(nameA), _weapon(weaponA){
	return;
};

HumanA::~HumanA(void){
	return;
};

void HumanA::attack(void) const{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	return ;
};