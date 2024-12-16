/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 18:21:21 by kahmada           #+#    #+#             */
/*   Updated: 2024/12/14 18:32:50 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

Weapon::Weapon(std::string type)  {
    this->type = type;
}

const std::string& Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string newType)
{
    type = newType;
}
