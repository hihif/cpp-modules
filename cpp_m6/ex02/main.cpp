/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:20:10 by fhihi             #+#    #+#             */
/*   Updated: 2023/09/26 16:46:31 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"
#include "ctime"

class Base {
public:
	virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base* generate() {
	srand(time(NULL));
    int randomValue = (rand() % 3);
	printf ("%d\n", randomValue);
    switch (randomValue) {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            return NULL;
    }
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p)) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << "C" << std::endl;
	} else {
		std::cout << "Unknown" << std::endl;
	}
}

void identify(Base& p) {
	identify(&p);
}

int main () {
	try {
		Base* obj = generate();
		identify(*obj);
		identify(obj);
		delete obj;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}