/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:05:45 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/07 17:08:02 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class Animal {
	
protected: 
	std::string type;

public:

	Animal();
	Animal( Animal & copy );
	virtual ~Animal();

	Animal & operator=( Animal const & rhs);
	
	virtual std::string getType() const;
	virtual void makeSound() const;
	
};

#endif