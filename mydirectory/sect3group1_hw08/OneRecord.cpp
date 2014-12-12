#include "OneRecord.h"
/*****************************************************************************
 * Class for a single record
 * A record simply has a long long integer value.
 *
 * Author: Nicholas Wrobel
 *         John Quinn
 *
 * Date: 7 December 2014
**/

/*****************************************************************************
 * Constructor and destructor
**/
OneRecord::OneRecord()
{
  this->setElement(DUMMYVALUE);
}

OneRecord::~OneRecord()
{
}

/*****************************************************************************
 * Accessors and mutators
**/
long long OneRecord::getElement() const
{
  return this->element;
}

void OneRecord::setElement(long long value)
{
  this->element = value;
}

/*****************************************************************************
 * General functions
**/

/*****************************************************************************
 * Function 'readElement'
 * This function takes in a scanner and reads the next integer value, storing
 * it as the element
 *
 * Parameters
 *    inFile: the scanner to be read from
**/
void OneRecord::readElement(Scanner& inFile)
{
  long long inValue = 0;
  inValue = inFile.nextInt();
  this->setElement(inValue);
}

/*****************************************************************************
 * Function 'toString'
 * This function returns a string of the instance data (the element)
 *
 * Returns
 *    string of the instance data
**/
string OneRecord::toString() const
{
  stringstream sstm; 
  sstm << this->getElement();

  return sstm.str();
}
