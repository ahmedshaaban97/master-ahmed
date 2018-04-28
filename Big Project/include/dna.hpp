#ifndef DNA_HPP
#define DNA_HPP

#include "arrays.hpp"

namespace dna{

char complementaryBase( char base )
{
    if( base == 'A' )
    {
        return 'T';
    }
    else if( base == 'T' )
    {
        return 'A';
    }
    else if( base == 'C' )
    {
        return 'G';
    }
    else
    {
        return 'C';
    }

}

char * complementarySequence( char *base, int size )
{
    char *na=new char[size];

    int i=0;
    int j=size-1;
    for( i;i<size;i++){
    na[j]=complementaryBase(base[i]);
    j--;
    }
    std::copy( &na[0] , &na[13 - 1] , &base[0] );
    return base;
}

char *analyzeDNA( char *base, int size, int &countA, int &countC, int &countG, int &countT )
{
    countA=array::countCharacter( base ,  size ,  'A' );
    countC=array::countCharacter( base ,  size ,  'C' );
    countG=array::countCharacter( base ,  size ,  'G' );
    countT=array::countCharacter( base ,  size ,  'T' );
    base=complementarySequence( base, size );

}

}

#endif // DNA_HPP
