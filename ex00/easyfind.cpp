/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:03:10 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/24 20:28:57 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
int easyfind(T myVector, int value)
{
	try
	{
		for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
			if (*it == value)
				return *it;
		throw std::runtime_error("Value not found!");
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << ' ';
	}
	return value;
}
