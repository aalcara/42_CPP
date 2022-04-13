/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:20:05 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/13 19:53:34 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>

template<typename T, class Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
public:
	MutantStack(void) {};
	~MutantStack(void) {};
	MutantStack(MutantStack const &Obj): std::stack<T, Container>(Obj){*this = Obj;}
	MutantStack &operator=(MutantStack const &Obj)
	{
		std::stack<T, Container>::operator=(Obj);
		return (*this);
	}
	
	typedef typename Container::iterator iterator;
	typedef typename Container::const_iterator const_iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	typedef typename Container::const_reverse_iterator const_reverse_iterator;

	iterator begin() {return (this->c.begin());}
	iterator end() {return (this->c.end());}
	const_iterator begin() const {return (this->c.begin());}
	const_iterator end() const {return (this->c.end());}
	reverse_iterator rbegin() {return (this->c.rbegin());}
	reverse_iterator rend() {return (this->c.rend());}
	const_reverse_iterator rbegin() const {return (this->c.rbegin());}
	const_reverse_iterator rend() const {return (this->c.rend());}
};

#endif
