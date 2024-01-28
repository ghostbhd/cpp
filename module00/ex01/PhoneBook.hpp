/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:18:49 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/15 15:05:57 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cstring>
#include <cstdio>
#include <stdlib.h>
#include <unistd.h>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		contact_count;
	int		size;
public:
	void	init(void);
	void	add(void);
	void	search(void);
};

#endif