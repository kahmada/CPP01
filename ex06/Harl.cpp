/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:59:35 by kahmada           #+#    #+#             */
/*   Updated: 2024/12/16 10:01:49 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}
void Harl::info()
{
    std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning()
{
    std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error()
{
    std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}
int fix_level(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level)
        {
            return i;
        }
    }
    return -1; 
}
void Harl::complain(std::string level)
{
    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};


    switch (fix_level(level)) {
        case 0:
            (this->*functions[0])();
            (this->*functions[1])();
            (this->*functions[2])();
            (this->*functions[3])();
            break;
        case 1:
            (this->*functions[1])();
            (this->*functions[2])();
            (this->*functions[3])();
            break;
        case 2:
            (this->*functions[2])();
            (this->*functions[3])();
            break;
        case 3:
            (this->*functions[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
    }
}

// void Harl::complain(std::string level)
// {
//     std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

//     void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

//     int levelIndex = -1;
//     if (level == "DEBUG")
//         levelIndex = 0;
//     else if (level == "INFO")
//         levelIndex = 1;
//     else if (level == "WARNING")
//         levelIndex = 2;
//     else if (level == "ERROR")
//         levelIndex = 3;

//     switch (levelIndex) {
//         case 0:
//             (this->*functions[0])();
//             (this->*functions[1])();
//             (this->*functions[2])();
//             (this->*functions[3])();
//             break;
//         case 1:
//             (this->*functions[1])();
//             (this->*functions[2])();
//             (this->*functions[3])();
//             break;
//         case 2:
//             (this->*functions[2])();
//             (this->*functions[3])();
//             break;
//         case 3:
//             (this->*functions[3])();
//             break;
//         default:
//             std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
//             break ;
//     }
// }
