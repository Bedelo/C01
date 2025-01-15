/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:11:02 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/15 14:20:35 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"

int	main(void){
	int nb = 0;
	int size = 5;

	Zombie* horde = zombieHorde(size, "my_name_");
	while (nb < size){
		horde[nb].announce();
		nb++;
	}
	delete[] horde;
	return (0);
}