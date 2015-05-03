#ifndef FULLINT_H
#define FULLINT_H

#include <string>
#include <iostream>

/**
 * @class FullInt
 * 
 * Allow to manipulate integers with no size limit (except computer memory)
 */
class FullInt {

public:

    /**
     * Constructor : initialize the number to 0
     */
    FullInt();
    
    /**
     * Constructor : initialize the number to the given value (or 0 if fail)
     *
     * @param string    The value to initialize the number
     */
    FullInt( std::string nbr );
    
    /**
     * Constructor : initialize the number to the given value (or 0 if fail)
     *
     * @param unsigned long int    The value to initialize the number
     */
    FullInt( unsigned long int nbr );
    
    /**
     * Destructor
     */
    virtual ~FullInt();
    
    /**
     * Get the number  in a string
     *
     * @return string   The number in string format
     */
    std::string get () const;
    
    /**
     * Set the number to the given value
     *
     * @param FullInt    The new value of the number
     *
     * @return bool True if success, false otherwise
     */
    bool set( FullInt const& nbr );
    
    /**
     * Set the number to the given value
     *
     * @param string    The new value of the number
     *
     * @return bool True if success, false otherwise
     */
    bool set( std::string const& nbr );
    
    /**
     * Set the number to given value
     *
     * @param unsigned long int   The new value of the number
     *
     * @return bool True if success, false otherwise
     */
    bool set( unsigned long int const& nbr );
    
    /**
     * Add a value to the number (sum operation)
     *
     * @param FullInt    The number to add (sum)
     *
     * @return bool True if success, false otherwise
     */
    bool add( FullInt const& nbr );
    
    /**
     * Add a value to the number (sum operation)
     *
     * @param string    The number to add (sum)
     *
     * @return bool True if success, false otherwise
     */
    bool add( std::string const& nbr );
    
    /**
     * Add a value to the number (sum operation)
     *
     * @param unsigned long int    The number to add (+)
     *
     * @return bool True if success, false otherwise
     */
    bool add( unsigned long int const& nbr );
    
    /**
     * Add a value to the number (sum operation)
     *
     * @param string    The number to subtract (-)
     *
     * @return bool True if success, false otherwise
     */
    bool subtract( FullInt const& nbr );
    
    /**
     * Add a value to the number (sum operation)
     *
     * @param FullInt    The number to subtract (-)
     *
     * @return bool True if success, false otherwise
     */
    bool subtract( std::string const& nbr );
    
    /**
     * Add a value to the number (sum operation)
     *
     * @param unsigned long int    The number to subtract (-)
     *
     * @return bool True if success, false otherwise
     */
    bool subtract( unsigned long int const& nbr );
    
    /**
     * Test if the two numbers are equals
     *
     * @param FullInt   The other number to compare with
     *
     * @return bool
     */
    bool isEqualTo( FullInt nbr ) const;
    
    /**
     * Test if the two numbers are equals
     *
     * @param string   The other number to compare with
     *
     * @return bool
     */
    bool isEqualTo( std::string nbr ) const;
    
    /**
     * Test if the two numbers are equals
     *
     * @param unsigned long int   The other number to compare with
     *
     * @return bool
     */
    bool isEqualTo( unsigned long int nbr ) const;
    
    /**
     * Test if the number is inferior to the given one
     *
     * @param FullInt   The other number to compare with
     *
     * @return bool
     */
    bool isInferiorTo( FullInt nbr ) const;
    
    /**
     * Test if the number is inferior to the given one
     *
     * @param string   The other number to compare with
     *
     * @return bool
     */
    bool isInferiorTo( std::string nbr ) const;
    
    /**
     * Test if the number is inferior to the given one
     *
     * @param unsigned long int   The other number to compare with
     *
     * @return bool
     */
    bool isInferiorTo( unsigned long int nbr ) const;
    
    /**
     * Test if the number is inferior or equal to the given one
     *
     * @param FullInt   The other number to compare with
     *
     * @return bool
     */
    bool isInferiorOrEqualTo( FullInt nbr ) const;
    
    /**
     * Test if the number is inferior or equal to the given one
     *
     * @param string   The other number to compare with
     *
     * @return bool
     */
    bool isInferiorOrEqualTo( std::string nbr ) const;
    
    /**
     * Test if the number is inferior or equal to the given one
     *
     * @param unsigned long int   The other number to compare with
     *
     * @return bool
     */
    bool isInferiorOrEqualTo( unsigned long int nbr ) const;
    
    /**
     * Test if the number is superior to the given one
     *
     * @param FullInt   The other number to compare with
     *
     * @return bool
     */
    bool isSuperiorTo( FullInt nbr ) const;
    
    /**
     * Test if the number is superior to the given one
     *
     * @param string   The other number to compare with
     *
     * @return bool
     */
    bool isSuperiorTo( std::string nbr ) const;
    
    /**
     * Test if the number is superior to the given one
     *
     * @param unsigned long int   The other number to compare with
     *
     * @return bool
     */
    bool isSuperiorTo( unsigned long int nbr ) const;
    
    /**
     * Test if the number is superior or equal to the given one
     *
     * @param FullInt   The other number to compare with
     *
     * @return bool
     */
    bool isSuperiorOrEqualTo( FullInt nbr ) const;
    
    /**
     * Test if the number is superior or equal to the given one
     *
     * @param string   The other number to compare with
     *
     * @return bool
     */
    bool isSuperiorOrEqualTo( std::string nbr ) const;
    
    /**
     * Test if the number is superior or equal to the given one
     *
     * @param unsigned long int   The other number to compare with
     *
     * @return bool
     */
    bool isSuperiorOrEqualTo( unsigned long int nbr ) const;
    
    /**
     * Return the number of digits of the number
     *
     * @return int The number of digits of the number
     */
    int nbDigits();
    
    /**
     * Overload for the operator +=
     *
     * @param FullInt
     */
    void operator+=( FullInt const& nb );
    
    /**
     * Overload for the operator +=
     *
     * @param string
     */
    void operator+=( std::string const& nb );
    
    /**
     * Overload for the operator +=
     *
     * @param unsigned long int
     */
    void operator+=( unsigned long int const& nb );
    
    /**
     * Overload for the operator -=
     *
     * @param FullInt
     */
    void operator-=( FullInt const& nb );
    
    /**
     * Overload for the operator -=
     *
     * @param string
     */
    void operator-=( std::string const& nb );
    
    /**
     * Overload for the operator -=
     *
     * @param unsigned long int
     */
    void operator-=( unsigned long int const& nb );

private:

    /**
     * Check if the given string is a valid int.
     * Valids int are integers >= 0
     *
     * @param string
     *
     * @return bool
     */
    bool isValid( std::string nbr ) const;

    /**
     * The number in string format
     *
     * @var string
     */
    std::string m_number;

};

/**
 * Overload for the operator ==
 *
 * @param FullInt
 * @param FullInt
 */
bool operator==( FullInt const& nb1, FullInt const& nb2 );

/**
 * Overload for the operator !=
 *
 * @param FullInt
 * @param FullInt
 */
bool operator!=( FullInt const& nb1, FullInt const& nb2 );

/**
 * Overload for the operator <
 *
 * @param FullInt
 * @param FullInt
 */
bool operator<( FullInt const& nb1, FullInt const& nb2 );

/**
 * Overload for the operator <=
 *
 * @param FullInt
 * @param FullInt
 */
bool operator<=( FullInt const& nb1, FullInt const& nb2 );

/**
 * Overload for the operator >
 *
 * @param FullInt
 * @param FullInt
 */
bool operator>( FullInt const& nb1, FullInt const& nb2 );

/**
 * Overload for the operator >=
 *
 * @param FullInt
 * @param FullInt
 */
bool operator>=( FullInt const& nb1, FullInt const& nb2 );

/**
 * Overload for the operator +
 *
 * @param FullInt
 * @param FullInt
 */
FullInt operator+( FullInt const& nb1, FullInt const& nb2 );

/**
 * Overload for the operator +
 *
 * @param FullInt
 * @param string
 */
FullInt operator+( FullInt const& nb1, std::string const& nb2 );

/**
 * Overload for the operator +
 *
 * @param string
 * @param FullInt
 */
FullInt operator+( std::string const& nb1, FullInt const& nb2 );

/**
 * Overload for the operator +
 *
 * @param FullInt
 * @param unsigned long int
 */
FullInt operator+( FullInt const& nb1, unsigned long int const& nb2 );

/**
 * Overload for the operator +
 *
 * @param unsigned long int
 * @param FullInt
 */
FullInt operator+( unsigned long int const& nb1, FullInt const& nb2 );

/**
 * Overload for the operator -
 *
 * @param FullInt
 * @param FullInt
 */
FullInt operator-( FullInt const& nb1, FullInt const& nb2 );

/**
 * Overload for the operator -
 *
 * @param FullInt
 * @param string
 */
FullInt operator-( FullInt const& nb1, std::string const& nb2 );

/**
 * Overload for the operator -
 *
 * @param string
 * @param FullInt
 */
FullInt operator-( std::string const& nb1, FullInt const& nb2 );

/**
 * Overload for the operator -
 *
 * @param FullInt
 * @param unsigned long int
 */
FullInt operator-( FullInt const& nb1, unsigned long int const& nb2 );

/**
 * Overload for the operator -
 *
 * @param unsigned long int
 * @param FullInt
 */
FullInt operator-( unsigned long int const& nb1, FullInt const& nb2 );

/**
 * Overload for the operator <<
 *
 * @param ostream   The stream that whill receive datas
 * @param FullInt
 *
 * @return ostream
 */
std::ostream& operator<<( std::ostream& stream, FullInt const& nb );

std::istream& operator>>( std::istream& stream, FullInt& nb );

#endif
