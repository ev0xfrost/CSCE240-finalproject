#include "OneRecord.h"

/*****************************************************************************
 * Overloaded operators for the record class OneRecord.cpp
 * We simply overloaded the comparison operators <, >, ==. This is done just
 * by comparing the elements contained in the Record objects.
 *
 * Authors: Nicholas Wrobel
 *          John Quinn
 *
 * Date: 27 November 2014
**/
bool operator <(const OneRecord& recordLeft, const OneRecord& recordRight)
{
  return recordLeft.getElement() < recordRight.getElement();
}

bool operator >(const OneRecord& recordLeft, const OneRecord& recordRight)
{
  return recordLeft.getElement() > recordRight.getElement();
}

bool operator ==(const OneRecord& recordLeft, const OneRecord& recordRight)
{
  return recordLeft.getElement() == recordRight.getElement();
}
