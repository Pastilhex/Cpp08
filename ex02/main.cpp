/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 05:30:51 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/27 07:03:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{

	MutantStack<int> myStack;
	MutantStack<int> otherStack(myStack);

	(otherStack.empty()) ? std::cout << "empty: true" << std::endl : std::cout << "empty: false" << std::endl;

	otherStack.push(1);
	otherStack.push(2);
	otherStack.push(3);

	std::cout << "The top element is: " << otherStack.top() << std::endl;

	(otherStack.empty()) ? std::cout << "empty: true" << std::endl : std::cout << "empty: false" << std::endl;

	otherStack.push(4);
	otherStack.push(5);
	otherStack.push(6);

	std::cout << "The top element is: " << otherStack.top() << std::endl;

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
