/****************************************************************
 * Header file for the record class. 
 *
 * Author/copyright: Nicholas Wrobel 
 *                   John Quinn 
 *                   Domonick Mack
 *
 * Date: 27 November 2014
 *
**/
#ifndef ONERECORD_H
#define ONERECORD_H

#include <iostream>
using namespace std;

#include "../../Utilities/Utils.h"
#include "../../Utilities/Scanner.h"
#include "../../Utilities/ScanLine.h"

class OneRecord
{
public:
  OneRecord();
  virtual ~OneRecord();
  
  long getElement() const;
  void setElement();
  void readElement(Scanner& inFile);
  String toString() const;
  

  //Overloaded comparison operators for the record class
  friend bool operator<(const OneRecord& recordLeft, 
                            const OnceRecord& recordRight);

  friend bool operator>(const OneRecord& recordLeft, 
                            const OnceRecord& recordRight);

  friend bool operator==(const OneRecord& recordLeft, 
                            const OnceRecord& recordRight);
private:
  long element;

};

#endif 
