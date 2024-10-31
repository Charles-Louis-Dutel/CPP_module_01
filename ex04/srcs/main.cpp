/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:56:30 by cdutel            #+#    #+#             */
/*   Updated: 2024/10/31 17:49:22 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::ifstream	infile(argv[1]);
		std::string		s1 = argv[2];
		std::string		s2 = argv[3];

		char line[256];
		std::string	test;
		if (infile.is_open())
		{
			while (infile.getline(line, 256))
			{
				test = line;
				std::cout << test.find(s1);
				std::cout << test;
			}
			infile.close();
		}
		else
			std::cout << "Error opening file" << std::endl;

		return (0);
	}
}
