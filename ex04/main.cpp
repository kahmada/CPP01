/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 12:27:33 by kahmada           #+#    #+#             */
/*   Updated: 2024/12/14 17:27:39 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace_occurrences(std::string& line, const std::string& s1, const std::string& s2)
{
    std::string result;
    size_t pos = 0;
    size_t found;

    while ((found = line.find(s1, pos)) != std::string::npos)
    {
        result.append(line, pos, found - pos);
        result.append(s2);
        pos = found + s1.length();
    }
    result.append(line, pos, line.length() - pos);
    line = result;
}


int main(int argc, char** argv)
{

    if (argc != 4)
    {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be an empty string." << std::endl;
        return 1;
    }
    std::ifstream inputFile;
    inputFile.open(filename);
    if (!inputFile.is_open())
    {
        std::cerr << "Error: Unable to open file " << filename << std::endl;
        return 1;
    }
    std::ofstream outputFile;
    outputFile.open(filename + ".replace");
    if (!outputFile.is_open())
    {
        std::cerr << "Error: Unable to create output file " << filename << ".replace" << std::endl;
        inputFile.close();
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line))
    {
        replace_occurrences(line, s1, s2);
        outputFile << line << std::endl;
    }
    inputFile.close();
    outputFile.close();

    std::cout << "Replacement completed. Check the file: " << filename << ".replace" << std::endl;
    return 0;
}

