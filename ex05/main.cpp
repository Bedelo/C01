/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:21:59 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/20 17:01:27 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.class.hpp"

int main(int ac, char **av){
	(void)	ac;
	(void)	av;

	Harl alerte;

	alerte.complain("INFO");
	alerte.complain("INFO");
	alerte.complain("WARNING");
	alerte.complain("DEBUG");
	alerte.complain("INFO");
	alerte.complain("ERROR");
	alerte.complain("dingdong");
	return (0);
}