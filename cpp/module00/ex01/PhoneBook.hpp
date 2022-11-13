/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:18:49 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/13 18:48:02 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <cstring>
#include <stdlib.h>
#include <unistd.h>
#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int		contact_count;
	int		size;
public:
	void add();
	void search(void);
};

#endif