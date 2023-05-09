/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clementinecheyrou-lagreze <clementinech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:21:21 by clementinec       #+#    #+#             */
/*   Updated: 2023/05/09 10:49:01 by clementinec      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain {
	
private:
	std::string		*_ideas;
public:

	Brain( void );
	Brain( Brain const & copy );
	~Brain( void );

	Brain & operator=( Brain const & rhs );
	
	std::string	*getIdeas() const;
}


#endif