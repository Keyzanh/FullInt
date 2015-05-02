#ifndef FULLINT_H
#define FULLINT_H

#include <string>

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
    ~FullInt();
    
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
    bool set( FullInt nbr );
    
    /**
     * Set the number to the given value
     *
     * @param string    The new value of the number
     *
     * @return bool True if success, false otherwise
     */
    bool set( std::string nbr );
    
    /**
     * Set the number to given value
     *
     * @param unsigned long int   The new value of the number
     *
     * @return bool True if success, false otherwise
     */
    bool set( unsigned long int nbr );
    
    /**
     * Add a value to the number (sum operation)
     *
     * @param FullInt    The number to add (sum)
     *
     * @return bool True if success, false otherwise
     */
    bool add( FullInt nbr );
    
    /**
     * Add a value to the number (sum operation)
     *
     * @param string    The number to add (sum)
     *
     * @return bool True if success, false otherwise
     */
    bool add( std::string nbr );
    
    /**
     * Add a value to the number (sum operation)
     *
     * @param unsigned long int    The number to add (sum)
     *
     * @return bool True if success, false otherwise
     */
    bool add( unsigned long int nbr );
    
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

private:

    /**
     * The number in string format
     *
     * @var string
     */
    std::string m_number;

};

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

#endif
