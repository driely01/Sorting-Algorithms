/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mergeSort.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:05:57 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/20 13:13:43 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mergeSort.hpp"

void printArray( std::vector<int> &array ) {

	std::vector<int>::iterator it = array.begin();
	for ( ; it != array.end(); ++it ) {

		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

static void merge( std::vector<int> left, std::vector<int> right, std::vector<int> &arr ) {

	arr.clear();
	std::vector<int>::iterator itLeft = left.begin();
	std::vector<int>::iterator itRight = right.begin();
	
	while ( itLeft < left.begin() + left.size() && itRight < right.begin() + right.size() ) {

		
		if ( *itLeft < *itRight ) {
			
			arr.push_back( *itLeft );
			++itLeft;
		}
		else {
			
			arr.push_back( *itRight );
			++itRight;
		}
	}
	while ( itLeft < left.begin() + left.size() ) {
		
		arr.push_back( *itLeft );
		++itLeft;
	}
	while ( itRight < right.begin() + right.size() ) {

		arr.push_back( *itRight );
		++itRight;
	}
}

void mergeSort( std::vector<int> &arr ) {

	size_t length = arr.size();
	if ( length <= 1 )
		return;
	
	std::vector<int> right;
	std::vector<int> left;
	std::vector<int>::iterator it = arr.begin();

	for ( ; it < arr.begin() + arr.size(); ++it ) {

		if ( it < arr.begin() + arr.size() / 2 ) {
			
			left.push_back( *it );
		} else {

			right.push_back( *it );
		}
	}
	
	mergeSort( left );
	mergeSort( right );
	merge( left, right, arr );
}