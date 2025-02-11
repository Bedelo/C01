/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:48:21 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 12:19:37 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	Zombie *zombie = newZombie("instance_of_Zombie");
	zombie->announce();
	randomChump("simple_zombie");
	delete zombie;
	return (0);
}
