/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:03:02 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/25 16:41:23 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _EASY_
#define _EASY_

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <deque>
#include <iterator>
#include <exception>

template <typename T>
int easyfind(T myContainer, int value)
{
	typename T::const_iterator it = find(myContainer.begin(), myContainer.end(), value);
	if (*it == value)
		return *it;
	else
		throw(std::out_of_range("Value not found"));
	return 0;
}

#endif
