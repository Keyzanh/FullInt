#include "FullInt.h"

FullInt::FullInt() :
m_number( "0" )
{}

FullInt::FullInt( std::string nbr )
{

    if( !set( nbr ) ) set( "0" );
    
}

FullInt::FullInt( unsigned long int nbr )
{

    if( !set( nbr ) ) set( "0" );
    
}

FullInt::~FullInt()
{}

std::string FullInt::get() const
{

    return m_number;
    
}

bool FullInt::set( FullInt nbr )
{

    return set( nbr.get() );
    
}

bool FullInt::set( std::string nbr )
{

    int const nbrSize = nbr.size();
    
    for( int i = 0; i < nbrSize; i++ ) // Check if all characters are a numbers
    {
        if( nbr[ i ] - '0' < 0 || nbr[ i ] - '0' > 9 ) return false;
    }
    m_number = nbr;    
    return true;
    
}

bool FullInt::set( unsigned long int nbr )
{

    std::string nbStr = std::to_string( nbr );    
    return set( nbStr );
    
}

bool FullInt::add( FullInt nbr )
{
    
    return add( nbr.get() );

}

bool FullInt::add( std::string nbr )
{

    unsigned int const nbrSize = nbr.size();
    unsigned int numberSize = m_number.size(), offset;
    unsigned short int digit1, digit2, digitSum,  restraint;
        
    for( unsigned int i = 0; i < nbrSize; i++ )
    {    
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

bool FullInt::add( unsigned long int nbr )
{

    std::string nbStr = std::to_string( nbr );    
    return add( nbStr );

}

bool FullInt::isEqualTo( FullInt nbr ) const
{

    return m_number == nbr.get();

}

bool FullInt::isEqualTo( std::string nbr ) const
{

    return m_number == nbr;

}

bool FullInt::isEqualTo( unsigned long int nbr ) const
{

    std::string nbStr = std::to_string( nbr );
    return m_number == nbStr;

}

bool FullInt::isInferiorTo( FullInt nbr ) const
{

    return isInferiorTo( nbr.get() );

}

bool FullInt::isInferiorTo( std::string nbr ) const
{

    int const numberSize = m_number.size();
    
    if( numberSize < nbr.size() )
        return true;
    else if( numberSize > nbr.size() )
        return false;    
    for( int i = 0; i < numberSize; i++ ) {
        if( m_number[ i ] < nbr[ i ] )
            return true;
        else if( m_number[ i ] > nbr[ i ] )
            return false;
    }    
    return false;

}

bool FullInt::isInferiorTo( unsigned long int nbr ) const
{

    std::string nbStr = std::to_string( nbr );
    return isInferiorTo( nbStr );

}

bool FullInt::isInferiorOrEqualTo( FullInt nbr ) const
{

    return isInferiorTo( nbr ) || isEqualTo( nbr );

}

bool FullInt::isInferiorOrEqualTo( std::string nbr ) const
{

    return isInferiorTo( nbr ) || isEqualTo( nbr );

}

bool FullInt::isInferiorOrEqualTo( unsigned long int nbr ) const
{

    return isInferiorTo( nbr ) || isEqualTo( nbr );

}

bool FullInt::isSuperiorTo( FullInt nbr ) const
{

    return !isInferiorOrEqualTo( nbr );

}

bool FullInt::isSuperiorTo( std::string nbr ) const
{

    return !isInferiorOrEqualTo( nbr );

}

bool FullInt::isSuperiorTo( unsigned long int nbr ) const
{

    return !isInferiorOrEqualTo( nbr );

}

bool FullInt::isSuperiorOrEqualTo( FullInt nbr ) const
{

    return !isInferiorTo( nbr );

}

bool FullInt::isSuperiorOrEqualTo( std::string nbr ) const
{

    return !isInferiorTo( nbr );

}

bool FullInt::isSuperiorOrEqualTo( unsigned long int nbr ) const
{

    return !isInferiorTo( nbr );

}

int FullInt::nbDigits() {

    return m_number.size();

}

void FullInt::operator+=( FullInt const& nb )
{

    add( nb.get() );

}

void FullInt::operator+=( std::string const& nb )
{

    add( nb );

}

void FullInt::operator+=( unsigned long int const& nb )
{

    add( nb );

}

bool operator==( FullInt const& nb1, FullInt const& nb2 )
{

    return nb1.isEqualTo( nb2 );

}

bool operator!=( FullInt const& nb1, FullInt const& nb2 )
{

    return !nb1.isEqualTo( nb2 );

}

bool operator<( FullInt const& nb1, FullInt const& nb2 )
{

    return nb1.isInferiorTo( nb2 );

}

bool operator<=( FullInt const& nb1, FullInt const& nb2 )
{

    return nb1.isInferiorOrEqualTo( nb2 );

}

bool operator>( FullInt const& nb1, FullInt const& nb2 )
{

    return nb1.isSuperiorTo( nb2 );

}

bool operator>=( FullInt const& nb1, FullInt const& nb2 )
{

    return nb1.isSuperiorOrEqualTo( nb2 );

}

FullInt operator+( FullInt const& nb1, FullInt const& nb2 )
{

    FullInt result( nb1 );
    result += nb2;
    return result;

}

FullInt operator+( FullInt const& nb1, std::string const& nb2 )
{

    FullInt result( nb1 );
    result += nb2;
    return result;

}

FullInt operator+( std::string const& nb1, FullInt const& nb2 )
{

    FullInt result( nb2 );
    result += nb1;
    return result;

}

FullInt operator+( FullInt const& nb1, unsigned long int const& nb2 )
{

    FullInt result( nb1 );
    result += nb2;
    return result;

}

FullInt operator+( unsigned long int const& nb1, FullInt const& nb2 )
{

    FullInt result( nb2 );
    result += nb1;
    return result;

}

std::ostream& operator<<( std::ostream& stream, FullInt const& nb )
{

    stream << nb.get();
    return stream;

}
