/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:51:17 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 17:08:03 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	return ;
}

Zombie::Zombie(std::string zombie_name): _name(zombie_name){
	return ;
}

Zombie::~Zombie(void){
	std::cout << "the zombie " << this->_name << " was destroyed." << std::endl; 
	return ;
}

void Zombie::announce(void){
	std::cout<< this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
