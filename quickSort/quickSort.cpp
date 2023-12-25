#include "quickSort.hpp"

void printArray( std::vector<int> array ) {

    for ( size_t i = 0; i < array.size(); i++ ) {

        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

void quickSort( std::vector<int> &array, int start, int end ) {

    if ( end - start <= 0 )
        return;

    size_t i = start;
    int j = start - 1;
    int pivot = array[end];
    for ( ; i <= end; i++ ) {

        if ( array[i] < pivot ) {

            j++;
            std::swap( array[j], array[i] );
        }
    }
    j++;
    std::swap( array[j], array[end] );
    quickSort( array, start, j - 1 );
    quickSort( array, j + 1, end );
}