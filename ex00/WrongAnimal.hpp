/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:05:45 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/07 17:09:04 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
	
protected: 
	std::string type;

public:

	WrongAnimal();
	WrongAnimal( WrongAnimal & copy );
	virtual ~WrongAnimal();

	WrongAnimal & operator=( WrongAnimal const & rhs);
	
	virtual std::string getType() const;
	virtual void makeSound() const;
	
};

#endif