/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertionSort.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:36:08 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/19 20:56:30 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertionSort.hpp"

void insertionSort( std::vector<int> &array ) {

	int tmp;
	size_t i = 1;
	size_t length = array.size();
	while ( i < length ) {

		tmp = array[i];
		int j = i - 1;
		while ( j >= 0 && tmp < array[j] ) {

			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = tmp;
		i++;
	}
}

void printArray( std::vector<int> array ) {

	std::vector<int>::iterator it = array.begin();
	for ( ; it != array.end(); ++it ) {

		std::cout << *it << " ";
	}
	std::cout << std::endl;
}