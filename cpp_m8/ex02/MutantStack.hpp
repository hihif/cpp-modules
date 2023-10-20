/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:42:15 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/20 07:03:40 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack();
	MutantStack(const MutantStack<T>& other);
	MutantStack<T>& operator=(const MutantStack<T>& other);
	~MutantStack();

	class iterator {
	private:
		typename std::stack<T>::container_type::iterator _it;
	public:
		iterator(typename std::stack<T>::container_type::iterator it);
		iterator(const iterator& other );
		iterator& operator=(const iterator& other );
		~iterator();

		iterator& operator++();
		iterator& operator--();
		T& operator*();
		bool operator==(const iterator& other) const;
		bool operator!=(const iterator& other) const;
	};

	iterator begin();
	iterator end();
};

// Nested class Orthedax Form
template <typename T>
MutantStack<T>::iterator::iterator(typename std::stack<T>::container_type::iterator it) : _it(it) {
}

template <typename T>
MutantStack<T>::iterator::iterator(const MutantStack<T>::iterator& other ) : _it(other._it) {
}

template <typename T>
typename MutantStack<T>::iterator& MutantStack<T>::iterator::operator=(const MutantStack<T>::iterator& other ) {
	if (this != &other)
		_it = other._it;
	return *this;
}

template <typename T>
MutantStack<T>::iterator::~iterator() {
}

// Nesteed class Operators
template <typename T>
typename MutantStack<T>::iterator& MutantStack<T>::iterator::operator++()  {
	typename MutantStack<T>::iterator& tmp(*this);
	this->_it++;
	return (tmp);
}

template <typename T>
typename MutantStack<T>::iterator& MutantStack<T>::iterator::operator--()  {
	typename MutantStack<T>::iterator& tmp(*this);
	this->_it--;
	return (tmp);
}

template <typename T>
T& MutantStack<T>::iterator::operator*() {
	return *_it;
}

template <typename T>
bool MutantStack<T>::iterator::operator==(const iterator& other) const {
	return _it == other._it;
}

template <typename T>
bool MutantStack<T>::iterator::operator!=(const iterator& other) const {
	return _it != other._it;
}

// Main class Orthedox Form
template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& other) {
	if (this != &other)
		std::stack<T>::operator=(other);
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {
}

// Main class methods
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return (iterator(this->c.begin()));
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return (iterator(this->c.end()));
}

#endif