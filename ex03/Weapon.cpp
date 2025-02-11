/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:37:54 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 16:17:06 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon): type(weapon){
	return ;	
};

Weapon::~Weapon(void){
	return ;
};

std::string Weapon::getType(void){
	return this->type;
};

void Weapon::setType(std::string type_weapon){	
	this->type = type_weapon;
	return ;
};

