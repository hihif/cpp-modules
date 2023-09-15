/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:30:05 by fhihi             #+#    #+#             */
/*   Updated: 2023/08/18 15:59:06 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"
#include"Cat.hpp"
#include"WrongCat.hpp"

int main()
{
	const Animal a;
	a.makeSound();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const Animal* arr[10];
	for (int i = 0; i < 10; i++) {
		if (i < 5)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}

	for (int j = 0; j < 10; j++)
		delete arr[j];
	
	delete j;//should not create a leak
	delete i;

	return 0;
}
