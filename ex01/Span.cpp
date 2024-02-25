/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:20:01 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/24 22:52:55 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(int nbr) : _n(nbr), myVector() {}

Span::Span(const Span& original)
{
	*this = original;
}

Span& Span::operator=(const Span& obj) 
{
	if (this != &obj)
		*this = obj;
	return *this;
}

Span::~Span() {}

void Span::addNumber(unsigned int n) 
{
	try 
	{
		if (myVector.size() < _n)
			myVector.push_back(n);
		else
			throw std::runtime_error("Vector out of limit!");
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

unsigned long int Span::shortestSpan()
{
	int minValue = INT_MAX;
	for (std::vector<int>::iterator it = this->myVector.begin(); it != this->myVector.end(); it++)
		for (std::vector<int>::iterator at = this->myVector.begin(); at != this->myVector.end(); at++) // testar a começar em minValue
			if (*it > *at && (*it - *at ) < minValue)
				minValue = *it - *at;
	return (unsigned long int)minValue;
}

unsigned long int Span::longestSpan()
{
	int minValue = INT_MIN;
	for (std::vector<int>::iterator it = this->myVector.begin(); it != this->myVector.end(); it++)
		for (std::vector<int>::iterator at = this->myVector.begin(); at != this->myVector.end(); at++) // testar a começar em minValue
			if (*it > *at && (*it - *at ) > minValue)
				minValue = *it - *at;
	return (unsigned long int)minValue;
}

int RandomNumber ()
{
	return (std::rand()%100);
}

void Span::fillRange()
{
	std::generate (this->myVector.begin(), this->myVector.end(), RandomNumber);
}

void Span::printRange()
{
	for (std::vector<int>::iterator it = this->myVector.begin(); it != this->myVector.end(); it++)
		std::cout << *it << std::endl;
}