/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:05:45 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/05 16:14:39 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal
{
	
private: 
	std::string type;

public:

	WrongCat();
	WrongCat( WrongCat & copy );
	~WrongCat();

	WrongCat & operator=( WrongCat const & rhs);
	
	std::string getType() const;
	void makeSound() const;
	
};

#endif