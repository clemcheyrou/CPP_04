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
#include <iostream>

class Cat : public Animal
{
	
private: 
	std::string type;

public:

	Cat();
	Cat( Cat & copy );
	~Cat();

	Cat & operator=( Cat const & rhs);
	
	std::string getType() const;
	void makeSound()const;
	
};

#endif