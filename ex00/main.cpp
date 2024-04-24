/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:02:49 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/25 16:41:07 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> myVector;
		int values[] = {1, 3, 5, 7, 2, 4, 6};
		const int size = sizeof(values) / sizeof(values[0]);
		myVector.assign(values, values + size);
		std::cout << easyfind(myVector, 2) << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::list<int> myList;
		int values[] = {1, 3, 5, 7, 2, 4, 6};
		const int size = sizeof(values) / sizeof(values[0]);
		myList.assign(values, values + size);
		std::cout << easyfind(myList, 0) << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::deque<int> myDeque;
		int values[] = {1, 3, 5, 7, 2, 4, 6};
		const int size = sizeof(values) / sizeof(values[0]);
		myDeque.assign(values, values + size);
		std::cout << easyfind(myDeque, 5) << std::endl;
	}
	catch (const std::out_of_range &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
