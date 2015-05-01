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
     * Destructor
     */
    ~FullInt();
    
    /**
     * Get the number  in a string
     *
     * @return string   The number in string format
     */
    std::string get();
    
    /**
     * Set the number to the given value
     *
     * @param string    The new value of the number
     *
     * @return bool True if success, false otherwise
     */
    bool set( std::string nbr );
    
    /**
     * Add a value to the number (sum operation)
     *
     * @param string    The number to add (sum)
     *
     * @return bool True if success, false otherwise
     */
    bool add( std::string nbr );
    
    /**
     * Return the number of digits of the number
     *
     * @return int The number of digits of the number
     */
    int nbDigits();

private:

    /**
     * The number in string format
     *
     * @var string
     */
    std::string m_number;

};

#endif