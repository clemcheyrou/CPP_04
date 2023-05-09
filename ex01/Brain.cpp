/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:21:25 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/09 10:36:09 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	_ideas = new std::string [100];
	for (int i = 0; i < 100 ; i++)
		_ideas[i] = "Idea" + i;
	std::cout << "Constructor called Brain" << std::endl;
	return;
}

Brain::Brain( Brain const & copy )
{
	std::string *copy_ideas = copy.getIdeas();
	_ideas = new std::string [100];
	for (int i = 0; i < 100 ; i++)
		_ideas[i] = copy_ideas[i];
	std::cout << "Constructor Copy called Brain" << std::endl;
	return;
}

Brain::~Brain( void )
{
	delete[] _ideas;
	std::cout << "Destructor called Brain" << std::endl;
}

Brain & Brain::operator=( Brain const & rhs )
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs.ideas[i];
	return (*this);
}

std::string *Brain::getIdeas() const
{
	return (this->ideas);
}

