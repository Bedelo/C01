/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:46:11 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/18 12:05:02 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring> 
#include "FileHandler.class.hpp"

int	main(int ac, char **av)
{
	std::string file_replace;
	std::string line;

	if (ac != 4){
		std::cout << "Erreur: Program needs 3 parameters to run" << std::endl;
		return (1);
	}
	
	std::ifstream inputFile(av[1]);
	 if (!inputFile) {
		std::cerr << "Erreur : Impossible d'ouvrir le fichier " << av[1] << std::endl;
		return 1;
	}
	
	file_replace = std::string(av[1]) + ".replace";
	std::ofstream outputFile(file_replace.c_str());
	if (!outputFile) {
		std::cerr << "Erreur : Impossible d'ouvrir le fichier " << file_replace << std::endl;
		return 1; 
	}
	
	while (std::getline(inputFile, line)) {
		std::string line_replace;
		FileHandler fh; 
		line_replace = fh.replace_string(line, std::string(av[2]), std::string(av[3]));
		outputFile << line_replace << std::endl;
	}

	inputFile.close();
	outputFile.close();
	
	return 0;
}