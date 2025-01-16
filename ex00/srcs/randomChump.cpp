/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:51:10 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/16 09:45:47 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.class.hpp"
#include <string>

void randomChump( std::string name) {
	Zombie new_zombie(name);
	new_zombie.announce();
	return ;
}