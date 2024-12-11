/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:56:30 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/11 15:18:42 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong input, try with : ./replace \"valid_filename\" \"string to search\" \"substitute string\"";
		return (1);
	}

	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		file_name = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		line;
	int			start = 0;
	int			s1_len = s1.length();

	infile.open(file_name.c_str());
	if (infile.is_open())
	{
		file_name.insert(file_name.length(), ".replace");
		outfile.open(file_name.c_str());
		if (outfile.is_open())
		{
			while (std::getline(infile, line))
			{
				while (true)
				{
					start = line.find(s1);
					if (start == -1 || s1[0] == '\0')
						break;
					line.erase(start, s1_len);
					line.insert(start, s2);
				}
				outfile << line << std::endl;
			}
		}
		else
		{
			std::cerr << "Error opening outfile" << std::endl;
			infile.close();
			return (1);
		}
	}
	else
	{
		std::cerr << "Error opening infile" << std::endl;
		return (1);
	}
	infile.close();
	outfile.close();
	return (0);
}

