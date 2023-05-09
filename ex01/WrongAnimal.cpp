/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:05:43 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/07 16:59:32 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Constructor Called WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal & copy )
{
	std::cout << "Constructor copy Called WrongAnimal" << std::endl;
	this->type = copy.type;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "Operator Called WrongAnimal" << std::endl;
	this->type = rhs.type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor Called WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound\n" << std::endl;
}
