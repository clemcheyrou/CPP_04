/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:05:43 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/05 16:24:07 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : type("Cat")
{
	std::cout << "Constructor Called Cat" << std::endl;
}

Cat::Cat( Cat & copy )
{
	std::cout << "Constructor copy Called Cat" << std::endl;
	this->type = copy.getType();
}

Cat & Cat::operator=( Cat const & rhs )
{
	std::cout << "Operator Called Cat" << std::endl;
	this->type = rhs.type;
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Called Cat" << std::endl;
}

std::string Cat::getType() const
{
	return(this->type);
}

void Cat::makeSound() const
{
	std::cout << "Cat sound\n" << std::endl;
}
