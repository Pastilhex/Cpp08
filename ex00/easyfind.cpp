/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:03:10 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/25 15:32:26 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
int easyfind(T myVector, int value)
{
	for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
		if (*it == value)
			return std::distance(myVector.begin(), it);
	return -1;
}
