/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:20:01 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/25 20:12:06 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(int nbr) : _n(nbr), _myVector() {}

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
		if (_myVector.size() < _n)
			_myVector.push_back(n);
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
	for (std::vector<int>::iterator it = this->_myVector.begin(); it != this->_myVector.end(); it++)
		for (std::vector<int>::iterator at = this->_myVector.begin(); at != this->_myVector.end(); at++)
			if (*it > *at && (*it - *at ) < minValue)
				minValue = *it - *at;
	return (unsigned long int)minValue;
}

unsigned long int Span::longestSpan()
{
	int maxValue = INT_MIN;
	for (std::vector<int>::iterator it = this->_myVector.begin(); it != this->_myVector.end(); it++)
		for (std::vector<int>::iterator at = this->_myVector.begin(); at != this->_myVector.end(); at++)
			if (*it > *at && (*it - *at ) > maxValue)
				maxValue = *it - *at;
	return (unsigned long int)maxValue;
}

int randomNumber (unsigned long int limit)
{
	return (std::rand() % limit);
}

bool uniqueValue(int value, std::vector<int> v)
{
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
		if (*it == value)
			return true;
	return false;
}

void Span::fillRange()
{
	int num;
	unsigned long limit;
	limit = _n * 5;
	do {
		do {
			num = randomNumber(limit);
		} while (uniqueValue(num, this->_myVector));
		this->_myVector.push_back(num);
	} while (this->_myVector.size() < _n);
}

std::vector<int> Span::vget() const
{
	return _myVector;
}

std::ostream& operator<<(std::ostream& out, const Span& v)
{
	std::vector<int> myVector = v.vget();
	for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++)
		out << *it << std::endl;
	return out;
}
