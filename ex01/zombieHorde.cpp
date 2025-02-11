/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:00:43 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 12:21:18 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <sstream> 

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde = new Zombie[N];
	int number = 0;
	
	while (number < N){
		std::ostringstream oss; 
		oss << number; 
		std::string str = oss.str();
		horde[number] = Zombie(name + str);
		number++;
	}
	return (horde);
}