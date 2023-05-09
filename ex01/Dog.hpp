/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:05:45 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/05 16:14:39 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Dog : public Animal 
{
	
private: 
	std::string _type;
	Brain		*_brain;

public:

	Dog( void );
	Dog( Dog & copy );
	~Dog( void );

	Dog & operator=( Dog const & rhs );
	
	std::string getType( void ) const;
	void makeSound( void ) const;
	Brain *getBrain( void ) const
	
};

#endif