/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:37:46 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/18 10:11:31 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"

HumanB::HumanB(std::string nameB): _name(nameB){
	this->_weapon = NULL;
	return ;
};

HumanB::~HumanB(void){
	return ;
};

void HumanB::setWeapon(Weapon &weaponB){
	this->_weapon = &weaponB;
};

void HumanB::attack(void) const{
	if (this->_weapon)
		std::cout << this->_name << " attacks with their " << (this->_weapon)->getType() << std::endl;
	else
		std::cout << this->_name << "can't attack, he hes no weapon" << std::endl;
	return ;
};