/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:51:17 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 17:03:30 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

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
