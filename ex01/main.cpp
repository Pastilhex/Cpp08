/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:19:45 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/25 20:11:52 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
	std::srand(static_cast<unsigned int>(std::time(0)));
	{
		// Span sp = Span(5);

		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);

		Span sp = Span(10000);

		sp.fillRange();
		// sp.printRange();

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	
    {
        std::cout << "\nTest 4 - Random N numbers: " << std::endl; 
        try
        {
            Span    test(2);
            test.addNumber(11);
            test.addNumber(1);
            // test.addNumber(8);
            std::cout << test << std::endl;
            std::cout << "Longest span: " << test.longestSpan() << std::endl;         
            std::cout << "Lowest span: " << test.shortestSpan() << std::endl;
        }
        catch (const std::length_error& e)
        {
            std::cerr << "Exception Caught: " << e.what() << std::endl;
        }
        
    }
	return 0;
}
