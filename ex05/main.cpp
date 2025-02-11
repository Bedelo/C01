/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:21:59 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 15:50:54 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
	(void)	ac;
	(void)	av;

	Harl alerte;

	alerte.complain("INFO");
	std::cout << std::endl;
	alerte.complain("INFO");
	std::cout << std::endl;
	alerte.complain("WARNING");
	std::cout << std::endl;
	alerte.complain("DEBUG");
	std::cout << std::endl;
	alerte.complain("INFO");
	std::cout << std::endl;
	alerte.complain("ERROR");
	std::cout << std::endl;
	alerte.complain("dingdong");
	return (0);
}