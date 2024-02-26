/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 05:31:13 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/26 20:28:41 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack() {}

template<typename T>
MutantStack<T>::~MutantStack() {}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& original)
{
	*this = original;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& obj)
{
	if (this != &obj)
		*this->_value = obj._value;
	return *this;
}

template<typename T>
typename std::deque<T>::iterator MutantStack<T>::begin()
{
    return _value.begin();
}

template<typename T>
typename std::deque<T>::iterator MutantStack<T>::end()
{
    return _value.end();
}

template<typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return _value.rbegin();
}

template<typename T>
typename std::deque<T>::reverse_iterator MutantStack<T>::rend()
{
    return _value.rend();
}

template<typename T>
typename std::deque<T>::const_iterator MutantStack<T>::cbegin()
{
    return _value.cbegin();
}


template<typename T>
typename std::deque<T>::const_iterator MutantStack<T>::cend()
{
    return _value.cend();
}

template<typename T>
typename std::deque<T>::const_reverse_iterator MutantStack<T>::crbegin()
{
    return _value.crbegin();
}


template<typename T>
typename std::deque<T>::const_reverse_iterator MutantStack<T>::crend()
{
    return _value.crend();
}
