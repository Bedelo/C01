/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 11:25:21 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/18 12:13:12 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.class.hpp"

FileHandler::FileHandler(void){
	return ;
}
	
FileHandler::~FileHandler(void){
	return ;
};
	
std::string FileHandler::replace_string(std::string line, std::string s1, std::string s2){
	std::string result;
	size_t pos = 0;
	size_t oldStrLength = s1.length();

	while ((pos = line.find(s1, pos)) != std::string::npos) {
		result += line.substr(0, pos);
		result += s2;
		pos += oldStrLength;
		line = line.substr(pos);
		pos = 0; 
	}

	result += line;

	return result;
};