/*****************************************************************************
 * Header file for the SortRoutines class that includes the 'Utilities' code.
 *
 * Author/copyright: Nicholas Wrobel 
 *                   John Quinn 
 *
 * Date: 27 November 2014
 *
**/
#ifndef SORTROUTINES_H
#define SORTROUTINES_H

#define SEED 1 //the seed for the random # generator

#include <iostream>
#include <cstdlib> //for random # generator

#include "Utils.h"
#include "Scanner.h"
#include "ScanLine.h"
#include "RecordArray.h"

using namespace std;

class SortRoutines
{
public:
  SortRoutines();
  virtual ~SortRoutines();

  void doTheWork(ofstream& outStream);
  void createDataFile(string filename, int howManyItems, ofstream& outStream);
  RecordArray readTheRecords(string filename, int howManyItems, 
                                                    ofstream& outStream);

private:

};

#endif
