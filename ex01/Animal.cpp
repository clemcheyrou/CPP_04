/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:05:43 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/07 17:00:28 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Constructor Called Animal" << std::endl;
}

Animal::Animal( Animal & copy )
{
	std::cout << "Constructor copy Called Animal" << std::endl;
	this->type = copy.type;
}

Animal & Animal::operator=( Animal const & rhs )
{
	std::cout << "Operator Called Animal" << std::endl;
	this->type = rhs.type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "Destructor Called Animal" << std::endl;
}

std::string Animal::getType() const
{
	return(this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound\n" << std::endl;
}
