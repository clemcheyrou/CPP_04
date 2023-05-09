/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:05:43 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/05 16:24:07 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : type("Dog")
{
	std::cout << "Constructor Called Dog" << std::endl;
}

Dog::Dog( Dog & copy )
{
	std::cout << "Constructor copy Called Dog" << std::endl;
	this->type = copy.getType();
}

Dog & Dog::operator=( Dog const & rhs )
{
	std::cout << "Operator Called Dog" << std::endl;
	this->type = rhs.type;
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Destructor Called Dog" << std::endl;
}

std::string Dog::getType() const
{
	return(this->type);
}

void Dog::makeSound() const
{
	std::cout << "Dog sound\n" << std::endl;
}
