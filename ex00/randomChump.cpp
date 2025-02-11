/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:51:10 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 12:18:46 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

void randomChump( std::string name) {
	Zombie new_zombie(name);
	new_zombie.announce();
	return ;
}