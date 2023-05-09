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

Cat::Cat( void ) : _type("Cat")
{
	_brain = new Brain;
	std::cout << "Constructor Called Cat" << std::endl;
}

Cat::Cat( Cat & copy )
{
	std::cout << "Constructor copy Called Cat" << std::endl;
	_type = copy.getType();
	_brain = new Brain(*(copy.getBrain()));
}

Cat & Cat::operator=( Cat const & rhs )
{
	std::cout << "Operator Called Cat" << std::endl;
	_type = rhs.type;
	if (brain)
		delete brain;
	brain = new Brain(*(rhs.getBrain()));
	return(*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Destructor Called Cat" << std::endl;
}

std::string Cat::getType( void ) const
{
	return(_type);
}

void Cat::makeSound( void ) const
{
	std::cout << "Cat sound\n" << std::endl;
}

Brain *Cat::getBrain( void ) const
{
	return (_brain);
}