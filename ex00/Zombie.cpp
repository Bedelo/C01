/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:51:17 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 12:17:28 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombie_name): name(zombie_name){
	return ;
}

Zombie::~Zombie(void){
	std::cout << "the zombie " << this->name << " was destroyed." << std::endl; 
	return ;
}

void Zombie::announce(void){
	std::cout<< this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
