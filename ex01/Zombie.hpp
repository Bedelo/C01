/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 10:47:57 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 17:08:09 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string> 
#include <iostream>

class	Zombie{

public:
	Zombie(void);
	Zombie(std::string zombie_name);
	~Zombie(void);

	void announce(void);
	
private:
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name);

#endif