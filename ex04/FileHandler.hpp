/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileHandler.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsunda <bsunda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:25:26 by bsunda            #+#    #+#             */
/*   Updated: 2025/02/11 19:53:31 by bsunda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HANDLER_H
#define FILE_HANDLER_H

#include <string>
#include <iostream>

class FileHandler {

public:
	FileHandler(void);
	~FileHandler(void);
	
	std::string replace_string(std::string line, std::string s1, std::string s2);
};

#endif