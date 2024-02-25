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
#include "easyfind.cpp"

int main() {

	std::vector<int> myVector;
	int values[] = {1, 3, 5, 7, 2, 4, 6};
	const int size = sizeof(values) / sizeof(values[0]);
	myVector.assign(values, values + size);

	(easyfind(myVector, 4) >= 0) ? std::cout << easyfind(myVector, 4) << std::endl : std::cout << "Error: Value not found" << std::endl;
	(easyfind(myVector, 18) >= 0) ? std::cout << easyfind(myVector, 18) << std::endl : std::cout << "Error: Value not found" << std::endl;
	(easyfind(myVector, 2) >= 0) ? std::cout << easyfind(myVector, 2) << std::endl : std::cout << "Error: Value not found" << std::endl;

	return 0;
}
