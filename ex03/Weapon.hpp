/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:37:51 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/12 10:42:52 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CLASS_HPP
#define WEAPON_CLASS_HPP 

#include <iostream>
#include <string>

class Weapon{

public:

	Weapon(std::string weapon);
	~Weapon(void);
	
	std::string getType(void);
	void setType(std::string type_weapon);

private:
	std::string _type;
};

#endif