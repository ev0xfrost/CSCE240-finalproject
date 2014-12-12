/****************************************************************
 * Header file for the record class. 
 *
 * Author/copyright: Nicholas Wrobel 
 *                   John Quinn 
 *
 * Date: 27 November 2014
 *
**/
#ifndef ONERECORD_H
#define ONERECORD_H

#define DUMMYVALUE -777777777777 //value to initialize the element to
#include <iostream>
using namespace std;

#include "Utils.h"
#include "Scanner.h"
#include "ScanLine.h"

class OneRecord
{
public:
  OneRecord();
  virtual ~OneRecord();

  long long getElement() const;
  void setElement(long long value);
  void readElement(Scanner& inFile);
  string toString() const;
  

  //Overloaded comparison operators for the record class
  friend bool operator<(const OneRecord& recordLeft, 
                            const OneRecord& recordRight);

  friend bool operator>(const OneRecord& recordLeft, 
                            const OneRecord& recordRight);

  friend bool operator==(const OneRecord& recordLeft, 
                            const OneRecord& recordRight);
private:
  long long element;

};
#endif 

