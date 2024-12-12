/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:56:30 by cdutel            #+#    #+#             */
/*   Updated: 2024/12/12 14:32:00 by cdutel           ###   ########.fr       */
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
	std::string		tmp_line;
	int				start = 0;
	int				s1_len = s1.length();

	infile.open(file_name.c_str());
	if (!infile.is_open())
	{
		std::cerr << "Error opening infile" << std::endl;
		return (1);
	}
	file_name += ".replace";
	outfile.open(file_name.c_str());
	if (!outfile.is_open())
	{
		std::cerr << "Error opening outfile" << std::endl;
		infile.close();
		return (1);
	}
	while (std::getline(infile, line))
	{
		while (true)
		{
			start = line.find(s1);
			if (start == -1 || s1[0] == '\0')
			{
				tmp_line.append(line.substr(0));
				break;
			}
			tmp_line.append(line.substr(0, start));
			line.erase(0, start + s1_len);
			tmp_line += s2;
		}
		outfile << tmp_line << std::endl;
		tmp_line.clear();
	}
	infile.close();
	outfile.close();
	return (0);
}
