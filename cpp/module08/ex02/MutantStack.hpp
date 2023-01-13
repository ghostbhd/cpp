/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 00:03:59 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/14 00:04:40 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
private:
    /* data */
public:
    MutantStack() : std::stack<T>() {}
    MutantStack(MutantStack const &src) : std::stack<T>(src) {}
    virtual ~MutantStack() {}

    MutantStack &operator=(MutantStack const &rhs)
    {
        if (this != &rhs)
            std::stack<T>::operator=(rhs);
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin()
    {
        return std::stack<T>::c.begin();
    }

    iterator end()
    {
        return std::stack<T>::c.end();
    }
};

#endif