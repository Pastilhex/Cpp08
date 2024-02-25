/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:19:54 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/25 18:23:27 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SPAN_
# define _SPAN_

#include <iostream>
#include <vector>
#include <exception>
#include <climits>
#include <algorithm>
#include <cstdlib>
#include <ctime>

class Span {
private:
	unsigned int _n;
	std::vector<int> myVector;
public:
	Span();
	Span(int nbr);
	Span(const Span&);
	~Span();
	Span& operator=(const Span&);
	void addNumber(unsigned int n);
	unsigned long int shortestSpan();
	unsigned long int longestSpan();
	void fillRange();
	void printRange();
};


#endif
