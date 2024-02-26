/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialves-m <ialves-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 05:32:16 by ialves-m          #+#    #+#             */
/*   Updated: 2024/02/26 06:55:38 by ialves-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MUTANTSTACK_
# define _MUTANTSTACK_

#include <iostream>
#include <deque>

template<typename T>
class MutantStack
{
private:
    std::deque<T> _value;
public:
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack&);
    MutantStack& operator=(const MutantStack&);
    
    // Stack member functions
    bool    empty();
    size_t  size();
    T*      top();
    void    push();
    void    emplace();
    void    pop();
    void    swap();

    // Iterator member functions
    typename std::deque<T>::iterator                begin();
    typename std::deque<T>::iterator                end();
    typename std::deque<T>::reverse_iterator        rbegin();
    typename std::deque<T>::reverse_iterator        rend();
    typename std::deque<T>::const_iterator          cbegin();
    typename std::deque<T>::const_iterator          cend();
    typename std::deque<T>::const_reverse_iterator  crbegin();
    typename std::deque<T>::const_reverse_iterator  crend();
};

#endif

/*
empty	Test whether container is empty (public member function)
size	Return size (public member function)
top	    Access next element (public member function)
push	Insert element (public member function)
emplace	Construct and insert element (public member function)
pop	    Remove top element (public member function)
swap	Swap contents (public member function)

begin	Return iterator to beginning (public member function)
end	    Return iterator to end (public member function)
rbegin	Return reverse iterator to reverse beginning (public member function)
rend	Return reverse iterator to reverse end (public member function)
cbegin	Return const_iterator to beginning (public member function)
cend	Return const_iterator to end (public member function)
crbegin	Return const_reverse_iterator to reverse beginning (public member function)
crend	Return const_reverse_iterator to reverse end (public member function)

// Funções de iterador
    typename std::deque<T>::iterator       begin() { return _value.begin(); }
    typename std::deque<T>::iterator       end() { return _value.end(); }
    typename std::deque<T>::reverse_iterator       rbegin() { return _value.rbegin(); }
    typename std::deque<T>::reverse_iterator       rend() { return _value.rend(); }
    typename std::deque<T>::const_iterator cbegin() const { return _value.cbegin(); }
    typename std::deque<T>::const_iterator cend() const { return _value.cend(); }
    typename std::deque<T>::const_reverse_iterator crbegin() const { return _value.crbegin(); }
    typename std::deque<T>::const_reverse_iterator crend() const { return _value.crend(); }
    
*/