/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 05:30:51 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/26 20:01:20 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"

int main() {
	
	MutantStack<int> myStack;
	MutantStack<int> otherStack;

	
	(myStack.empty()) ? std::cout << "empty: true" << std::endl : std::cout << "empty: false" << std::endl;

	myStack.push(1);
	myStack.push(2);
	myStack.push(3);

	std::cout << "The top element is: " << myStack.top() << std::endl;

	(myStack.empty()) ? std::cout << "empty: true" << std::endl : std::cout << "empty: false" << std::endl;

	myStack.push(4);
	myStack.push(5);
	myStack.push(6);

	std::cout << "The top element is: " << myStack.top() << std::endl;

	myStack.pop();

	std::cout << "The top element is: " << myStack.top() << std::endl;

	MutantStack<int>::iterator it = myStack.begin();
	MutantStack<int>::iterator ite = myStack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	
	std::stack<int> s(myStack);

    return 0;
}
