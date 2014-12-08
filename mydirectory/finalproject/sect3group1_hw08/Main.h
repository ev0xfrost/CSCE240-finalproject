/****************************************************************
 * Rather generic header file that includes the 'Utilities' code.
 *
 * Author/copyright: Nicholas Wrobel 
 *                   John Quinn 
 *                   Domonick Mack
 *
 * Date: 27 November 2014
 *
**/
#ifndef MAIN_H
#define MAIN_H

#include <iostream>
using namespace std;

#include "../../Utilities/Utils.h"
#include "../../Utilities/Scanner.h"
#include "../../Utilities/ScanLine.h"

#include "RecordArray.h"

class Main
{
public:
  int main();
  virtual ~Main();

  void createDataFile(String filename, int howManyItems);
  RecordArray readTheRecords(String filename, int howManyItems);


private:

};

#endif // MAIN_H
