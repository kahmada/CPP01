/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 16:14:17 by kahmada           #+#    #+#             */
/*   Updated: 2024/12/10 15:28:09 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName) : name(zombieName)
{
    std::cout << "Zombie " << name << " has been created.\n";
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " has been destroyed.\n";
}


void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}

