/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:21:59 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 15:35:19 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
	(void)	ac;
	(void)	av;

	Harl alerte;
	if (ac != 2)
		std::cout << "execute with: ./harlFilter <LEVEL>" << std::endl;
	else
		alerte.complain(av[1]);

	return (0);
}