/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:26:14 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 15:43:24 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
	tab[0] = (s_level_message){"DEBUG", &Harl::debug}; 
	tab[1] = (s_level_message){"INFO", &Harl::info};
	tab[2] = (s_level_message){"WARNING", &Harl::warning}; 
	tab[3] = (s_level_message){"ERROR", &Harl::error};
	return ;
}

Harl::~Harl(void){
	return ;
}

void Harl::complain(std::string level){
	int i = 0;
	while(i < 4){
		if (tab[i].level == level)
		{
			(this->*tab[i].f)();
			return ;
		}		
		i++;
	}
	std::cout << "!!! This level [" << level << "] is unknow !!! " << std::endl;
}

void Harl::debug( void ){
	std::cout << "[DEBUG] love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
ketchup burger. I really do!" << std::endl;
};

void Harl::info( void ){
	std::cout << "[INFO] cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning( void ){
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for\
years whereas you started working here since last month." << std::endl;
};

void Harl::error( void ){
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl;
};

