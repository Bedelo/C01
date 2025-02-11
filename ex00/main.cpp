/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:48:21 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 16:44:25 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie *zombie = newZombie("instance_of_Zombie");
	zombie->announce();
	delete zombie;
	std::cout << std::endl;
	randomChump("simple_zombie");
	return (0);
}
