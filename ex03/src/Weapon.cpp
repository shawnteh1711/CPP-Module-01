/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 18:05:38 by steh              #+#    #+#             */
/*   Updated: 2022/08/30 18:39:49 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

using std::string;

Weapon::Weapon(string type) : _type(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const string	Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(string type)
{
	this->_type = type;
}
