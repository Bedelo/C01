/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:26:18 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 15:33:17 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
#define HARL_H

#include <string>
#include <cstring>
#include <iostream>

class Harl; 

struct s_level_message{
	int			num_level;
	std::string	level;
	void		(Harl::*f)(void);
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