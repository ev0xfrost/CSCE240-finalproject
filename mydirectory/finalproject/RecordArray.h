/****************************************************************
 * Header file for the RecordArray.cpp
 *
 * Author/Copyright: John C. Quinn
 * Date last modified: 3 November 2014
 *
**/

#ifndef RECORDARRAY_H
#define RECORDARRAY_H

#include <iostream>
#include <vector>
using namespace std;

#include "../../Utilities/Scanner.h"
#include "../../Utilities/ScanLine.h"
#include "OneRecord.h"

class RecordArray
{
public:
  RecordArray(int howMany);
  virtual ~RecordArray();

  void writeRecordArray();
  void readRecordArray(Scanner& scanner);
  int getElts() const;

private:
  int numElts;  

};
#endif
