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

Dog::Dog( void ) : _type("Dog")
{
	_brain = new Brain;
	std::cout << "Constructor Called Dog" << std::endl;
}

Dog::Dog( Dog & copy )
{
	std::cout << "Constructor copy Called Dog" << std::endl;
	_brain = new Brain(*(copy.getBrain()));
	_type = copy.getType();
	
}

Dog & Dog::operator=( Dog const & rhs )
{
	std::cout << "Operator Called Dog" << std::endl;
	if (_brain)
		delete _brain;
	_brain = new Brain(*(copy.getBrain()));
	_type = rhs.type;
	return(*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Destructor Called Dog" << std::endl;
}

std::string Dog::getType( void ) const
{
	return(this->type);
}

void Dog::makeSound( void ) const
{
	std::cout << "Dog sound\n" << std::endl;
}

Brain *Dog::getBrain( void ) const
{
	return (_brain);
}
