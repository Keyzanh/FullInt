#include <iostream>
#include "FullInt.h"

FullInt::FullInt() { set( "0" ); }

FullInt::FullInt( std::string nbr ) { 

    if( !set( nbr ) ) {
    
        set( "0" );
    
    }
    
}

FullInt::~FullInt() {}

std::string FullInt::get() {

    return m_number;

}

bool FullInt::set( std::string nbr ) {

    int const nbrSize = nbr.size();
    
    // Check if all characters are a numbers
    for( int i = 0; i < nbrSize; i++ ) {
        if( nbr[ i ] - '0' < 0 || nbr[ i ] - '0' > 9 ) { return false; }
    }

    m_number = nbr;
    
    return true;

}

bool FullInt::add( std::string nbr ) {

    unsigned int const nbrSize = nbr.size();
    unsigned int numberSize = m_number.size(), offset;
    unsigned short int digit1, digit2, digitSum,  restraint;
    
    for( unsigned int i = 0; i < nbrSize; i++ ) {
    
        offset = i; // Will differ from i if restraints
        restraint = 0;
    
        do {
        
            // Choose if digit2 should be nbr digit or restraint digit
            if( restraint ) {
                digit2 = 1;
                offset++;
            } else {
                digit2 = nbr[ nbrSize - i - 1 ] - '0';
            }
        
            // Get m_number digit or create it if needed
            if( offset == numberSize ) {
                m_number = "0" + m_number;
                numberSize = m_number.size();
                digit1 = 0;
            } else if( offset < numberSize ) {
                digit1 = m_number[ numberSize - offset - 1 ] - '0';
            } else { return false; }
            
            digitSum = digit1 + digit2;
            
            // Save the good value to m_number and define if constraint needed
            if( digitSum > 9 ) {
                restraint = digitSum / 10;
                digitSum %= 10;
            } else { restraint = 0; }
            m_number[ numberSize - offset - 1 ] = digitSum + '0';
        
        } while( restraint );
    
    }
        
    return true;

}

int FullInt::nbDigits() {

    return m_number.size();

}