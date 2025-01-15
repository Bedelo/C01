/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:37:51 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/15 17:01:12 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon{

public:

	Weapon(void);
	~Weapon(void);
	
	std::string getType(void);
	void setType(std::string type);

private:
	std::string type;
};