/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 17:59:54 by kahmada           #+#    #+#             */
/*   Updated: 2024/12/14 18:12:14 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>

class Zombie {
private:
    std::string _name; 
    

public:
    Zombie();
    ~Zombie();

    void setName(std::string name);
    void announce();
};

#endif
