/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:26:14 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/08 18:24:37 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

Harl::Harl(void){
	tab[0] = (s_level_message){1, "DEBUG", &Harl::debug}; 
	tab[1] = (s_level_message){2, "INFO", &Harl::info};
	tab[2] = (s_level_message){3, "WARNING", &Harl::warning}; 
	tab[3] = (s_level_message){4, "ERROR", &Harl::error};
	return ;
}

Harl::~Harl(void){
	return ;
}

void Harl::complain(std::string level){
	int i = 0;

	while (i < 4)
	{
		if (tab[i].level == level)
			break;
		i++;
	}
	switch (i){
		case 0:
			(this->*tab[0].f)();
		case 1:
			(this->*tab[1].f)();
		case 2:
			(this->*tab[2].f)();
		case 3:
			(this->*tab[3].f)();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ] " << std::endl;
	}
}

// void Harl::complain(std::string level){
// 	int i = 0;
// 	int j = 0;

// 	while(i < 4){
// 		if (tab[i].level == level){
// 			j = i;
// 			while (j < 4){
// 				(this->*tab[j].f)();
// 				std::cout << std::endl;
// 				j++;
// 			}
// 			return ;
// 		}		
// 		i++;
// 	}
// 	std::cout << "[ Probably complaining about insignificant problems ] " << std::endl;
// }

void Harl::debug( void ){
	std::cout << "[DEBUG] love having extra bacon for my 7XL-double-cheese-triple-pickle-special-\
ketchup burger. I really do!" << std::endl << std::endl;
};

void Harl::info( void ){
	std::cout << "[INFO] cannot believe adding extra bacon costs more money. You didn’t put\
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
};

void Harl::warning( void ){
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for\
years whereas you started working here since last month." << std::endl << std::endl;
};

void Harl::error( void ){
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
};

