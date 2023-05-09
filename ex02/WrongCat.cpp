/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:05:43 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/05 16:24:07 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : type("WrongCat")
{
	std::cout << "Constructor Called WrongCat" << std::endl;
}

WrongCat::WrongCat( WrongCat & copy )
{
	std::cout << "Constructor copy Called WrongCat" << std::endl;
	this->type = copy.getType();
}

WrongCat & WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "Operator Called WrongCat" << std::endl;
	this->type = rhs.type;
	return(*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor Called WrongCat" << std::endl;
}

std::string WrongCat::getType() const
{
	return(this->type);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound\n" << std::endl;
}
