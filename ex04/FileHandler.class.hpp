/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:25:26 by bsunda            #+#    #+#             */
/*   Updated: 2025/01/18 11:58:08 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HANDLER_CLASS_H
#define FILE_HANDLER_CLASS_H

#include <string>
#include <iostream>

class FileHandler {

public:
	int	position;

	FileHandler(void);
	~FileHandler(void);
	
	std::string replace_string(std::string line, std::string s1, std::string s2);
};

#endif