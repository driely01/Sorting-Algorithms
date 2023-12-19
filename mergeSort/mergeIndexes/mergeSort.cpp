/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeSort.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:00:31 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/19 13:23:22 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mergeSort.hpp"


static void merge( std::vector<int> left, std::vector<int> right, std::vector<int> &array ) {

	size_t leftSize = left.size();
	size_t rightSize = right.size();
	size_t i = 0;
	size_t l = 0;
	size_t r = 0;
	while ( l < leftSize &&  r < rightSize ) {

		if ( left[l] < right[r] )
			array[i++] = left[l++];
		else
			array[i++] = right[r++];
	}
	while ( l < leftSize )
		array[i++] = left[l++];
	while ( r < rightSize )
		array[i++] = right[r++];
}

void mergeSort( std::vector<int> &array ) {

	size_t length = array.size();
	
	if( length <= 1 )
		return;
	
	size_t middle = length / 2;
	std::vector<int> left;
	std::vector<int> right;

	for ( size_t i = 0; i < length; i++ ) {

		if ( i < middle )
			left.push_back( array[i] );
		else
			right.push_back( array[i] );
	}
	mergeSort( left );
	mergeSort( right );
	merge( left, right, array );
}

// print array
void printArray( std::vector<int> &array ) {

	std::vector<int>::iterator it = array.begin();
	for ( ; it != array.end(); ++it ) {

		std::cout << *it << " ";
	}
	std::cout << std::endl;
}