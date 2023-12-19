/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-yaag <del-yaag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 13:11:24 by del-yaag          #+#    #+#             */
/*   Updated: 2023/12/19 13:19:10 by del-yaag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mergeSort.hpp"

int main( void ) {

	std::vector<int> array;
	
	srand( time( NULL ) );
	for ( size_t i = 0; i < 100; i++ ) {

		int nb = rand() % 1500 + 1;
		array.push_back( nb );
	}
	mergeSort( array );
	printArray( array );
	return 0;
}