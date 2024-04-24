/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 05:32:16 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/27 06:59:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_
#define _MUTANTSTACK_

#include <iostream>
#include <stack>
#include <vector>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void) : std::stack<T>(){};
	MutantStack(const MutantStack &original) : std::stack<T>(original){};
	MutantStack &operator=(const MutantStack &obj)
	{
		if (this != &obj)
			*this = obj;
		return *this;
	};
	~MutantStack(void){};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin()
	{
		return (std::stack<T>::c.begin());
	}

	iterator end()
	{
		return (std::stack<T>::c.end());
	}

	const_iterator begin() const
	{
		return (std::stack<T>::c.begin());
	}

	const_iterator end() const
	{
		return (std::stack<T>::c.end());
	}

	reverse_iterator rbegin()
	{
		return (std::stack<T>::c.rbegin());
	}

	reverse_iterator rend()
	{
		return (std::stack<T>::c.rend());
	}

	const_reverse_iterator rbegin() const
	{
		return (std::stack<T>::c.rbegin());
	}

	const_reverse_iterator rend() const
	{
		return (std::stack<T>::c.rend());
	}
};

#endif
