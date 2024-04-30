/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:19:45 by ialves-m          #+#    #+#             */
/*   Updated: 2024/04/30 11:56:37 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "*** 1 Test Random numbers: ***" << std::endl;
	{
		try
		{
			std::srand(static_cast<unsigned int>(std::time(0)));
			Span sp = Span(100);

			sp.fillRange();
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
			std::cout << "Lowest span: " << sp.shortestSpan() << std::endl;
		}
		catch (const std::length_error &e)
		{
			std::cerr << "Exception Caught: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "*** 2 Test N numbers: ***" << std::endl;
	{
		try
		{
			Span test(5);

			test.addNumber(6);
			test.addNumber(3);
			test.addNumber(17);
			test.addNumber(9);
			test.addNumber(11);
			std::cout << "Longest span: " << test.longestSpan() << std::endl;
			std::cout << "Lowest span: " << test.shortestSpan() << std::endl;
		}
		catch (const std::length_error &e)
		{
			std::cerr << "Exception Caught: " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "*** 3 Test N numbers: ***" << std::endl;
	{
		try
		{
			Span test(10);

			test.addNumber(-10);
			test.addNumber(2);
			test.addNumber(4);
			test.addNumber(8);
			test.addNumber(10);
			std::cout << "Longest span: " << test.longestSpan() << std::endl;
			std::cout << "Lowest span: " << test.shortestSpan() << std::endl;
		}
		catch (const std::length_error &e)
		{
			std::cerr << "Exception Caught: " << e.what() << std::endl;
		}
	}

	return 0;
}
