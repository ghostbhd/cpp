/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 01:06:46 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/08 01:17:33 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct data
{
	std::string s1;
	int n;
};

uintptr_t serialize(data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<data *>(raw);
}

int main()
{
	data *d = new data;

	d->s1 = "Hello";
	d->n = 42;

	uintptr_t raw = serialize(d);

	data *d2 = deserialize(raw);

	std::cout << d2->s1 << std::endl;
	std::cout << d2->n << std::endl;

	if (d == d2)
		std::cout << "Same address" << std::endl;
	else
		std::cout << "Different address" << std::endl;
	delete d;

	return 0;
}