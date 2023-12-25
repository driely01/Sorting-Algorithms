#include "quickSort.hpp"

int main( void ) {

    std::vector<int> array;

    std::srand( time( NULL ) );
    for ( size_t i = 0; i < 10; i++ ) {

        int random = std::rand() % 10 + 1;
        array.push_back( random );
    }
    printArray( array );
    quickSort( array, 0, array.size() - 1 );
    printArray( array );
    return 0;
}