/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 05:31:13 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/26 20:00:03 by ialves-m         ###   ########.fr       */
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

// template<typename T>
// bool MutantStack<T>::empty()
// {
//     return _value.empty();
// }


// template<typename T>
// size_t  MutantStack<T>::size()
// {
// 	return _value.size();
// }

// template<typename T>
// T      MutantStack<T>::top()
// {
//     if (!_value.empty())
//         return _value.back();
// 	return 0;
// }

// template<typename T>
// void    MutantStack<T>::push(T v)
// {
// 	_value.push_back(v);
// }

// template<typename T>
// void    MutantStack<T>::emplace(T v)
// {
// 	_value.push_back(v);
// }

// template<typename T>
// void    MutantStack<T>::pop()
// {
// 	_value.pop_back();
// }

// template<typename T>
// void    MutantStack<T>::swap()
// {
// 	_value.swap();
// }
