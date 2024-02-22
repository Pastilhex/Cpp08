/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:03:10 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/22 13:47:14 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
T* easyfind(T* one, int two)
{
	for (int i = 0; i < one.size(); i++)
		if (one[i] == two)
			return one[i];
	
}
