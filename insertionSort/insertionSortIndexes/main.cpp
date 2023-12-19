/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 20:40:37 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/19 20:57:12 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "insertionSort.hpp"

int main( void ) {

	int nb;
	std::vector<int> array;

	std::srand( time( NULL ) );
	for ( size_t i = 0; i < 20; i++ ) {

		nb = std::rand() % 50 + 1;
		array.push_back( nb );
		
	}
	printArray( array );
	insertionSort( array );
	printArray( array );
	return 0;
}