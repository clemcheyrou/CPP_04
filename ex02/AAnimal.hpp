/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:05:45 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/09 11:17:03 by clementinec      ###   ########.fr       */
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
	// une classe avec une fonction virtuelle pure est appelée une classe abstraite
	virtual ~Animal() = 0;

	Animal & operator=( Animal const & rhs);
	
	virtual std::string getType() const;
	virtual void makeSound() const = 0;
	
};

#endif