/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:26:18 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/20 16:49:08 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CASS_H
#define HARL_CASS_H

#include <string>
#include <cstring>
#include <iostream>

class Harl; 

struct s_level_message{
	std::string level;
	void (Harl::*f)(void);
};


class Harl {
	
public:
	Harl(void);
	~Harl(void);
	void complain( std::string level);


private:
	s_level_message tab[4];
	
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};



#endif