/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:59:40 by kahmada           #+#    #+#             */
/*   Updated: 2024/12/12 16:37:54 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde(int N, std::string name);

int main()
{
    int numZombies = 5;
    std::string name = "Zombie";
    Zombie* horde = zombieHorde(numZombies, name);
    if (horde)
    {
        for (int i = 0; i < numZombies; ++i)
        {
            horde[i].announce();
        }
        delete[] horde;
        horde = NULL;
    } 
    return 0;
}
