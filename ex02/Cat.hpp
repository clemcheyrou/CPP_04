/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:05:45 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/05 16:14:39 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
	
private: 
	std::string _type;
	Brain		*_brain;

public:

	Cat( void );
	Cat( Cat & copy );
	~Cat( void );

	Cat & operator=( Cat const & rhs);
	
	std::string getType() const;
	void makeSound() const;
	Brain *getBrain( void ) const;
	
};

#endif