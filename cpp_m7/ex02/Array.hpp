/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhihi <fhihi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:00:49 by fhihi             #+#    #+#             */
/*   Updated: 2023/10/11 12:03:15 by fhihi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define	ARRAY_HPP

#include <stdlib.h>
#include <iostream>

template <typename T>
class Array {
private:
	T	*arr;
	int	size_;
public:
	Array();
	Array(int n);
	Array(const Array& other);
	Array operator=(const Array& other);
	~Array();

	T& operator[](int index);

	int	size()  const;
};

// Orthodox Canonical Form
template <typename T>
Array<T>::Array() : arr(NULL), size_(0) {
}

template <typename T>
Array<T>::Array(int n) : size_(n) {
	if (n < 0)
		throw std::out_of_range("size of array should be positive");
	arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array<T>& other) : size_(other.size_) {
	arr = new T[other.size_];
}

template <typename T>
Array<T> Array<T>::operator=(const Array<T>& other) {
    if (this == &other) {
        return *this;
    }
    delete[] arr;
	
    size_ = other.size_;
    arr = new T[size_];
    for (int i = 0; i < size_; ++i) {
        arr[i] = other.arr[i];
    }
}

template <typename T>
Array<T>::~Array() {
	delete[] arr;
}

// Operators
template <typename T>
T& Array<T>::operator[](int index) {
	if (index < 0 || index >= size_)
		throw std::out_of_range("Index is Out of Range");
	return arr[index];
}

// Methods
template <typename T>
int	Array<T>::size()  const {
	return size_;
}

#endif