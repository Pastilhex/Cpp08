/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:02:49 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/24 20:29:20 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "easyfind.cpp"

int main() {

	std::vector<int> myVector;

	for (int i = 0; i < 10; i++)
		myVector.push_back(i);

	std::cout << easyfind(myVector, 8) << std::endl;
	std::cout << easyfind(myVector, 18) << std::endl;
	std::cout << easyfind(myVector, 1) << std::endl;

	return 0;
}
