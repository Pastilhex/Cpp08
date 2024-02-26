/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 05:32:16 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/26 19:57:33 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_
# define _MUTANTSTACK_

#include <iostream>
#include <deque>
#include <stack>

template<typename T>
class MutantStack : public std::stack< T, std::deque<T> >
{
private:
    std::deque<T> _value;
public:
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack&);
	MutantStack& operator=(const MutantStack&);

	// Stack member functions
	// bool    empty();
	// size_t  size();
	// T      	top();
	// void    push(T v);
	// void    emplace(T v);
	// void    pop();
	// void    swap();

	// Iterator member functions
	typedef typename std::deque<T>::iterator				iterator;
	typedef typename std::deque<T>::reverse_iterator		reverse_iterator;
	typedef typename std::deque<T>::const_iterator			const_iterator;
	typedef typename std::deque<T>::const_reverse_iterator	const_reverse_iterator;

	iterator                	begin();
	iterator                	end();
	reverse_iterator        	rbegin();
	reverse_iterator        	rend();
	const_iterator          	cbegin();
	const_iterator          	cend();
	const_reverse_iterator  	crbegin();
	const_reverse_iterator  	crend();
};

#endif
