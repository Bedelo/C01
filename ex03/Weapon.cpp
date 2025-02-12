/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:37:54 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/12 10:43:15 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon): _type(weapon){
	return ;	
};

Weapon::~Weapon(void){
	return ;
};

std::string Weapon::getType(void){
	return this->_type;
};

void Weapon::setType(std::string type_weapon){	
	this->_type = type_weapon;
	return ;
};

