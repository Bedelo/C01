/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:47:57 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/15 11:42:56 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string> 
#include <iostream>

class	Zombie{

public:
	Zombie(void);
	Zombie(std::string zombie_name);
	~Zombie(void);

	void announce(void);
	
private:
	std::string name;
};

Zombie*	newZombie(std::string name);
void	randomChump( std::string name);
