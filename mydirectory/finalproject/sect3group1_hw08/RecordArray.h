/****************************************************************
 * Header file for the RecordArray class
 *
 * Author/copyright: Nicholas Wrobel 
 *                   John Quinn 
 *                   Domonick Mack
 *
 * Date: 27 November 2014
 *
**/
#ifndef RECORDARRAY_H
#define RECORDARRAY_H

#include <iostream>
using namespace std;

#include "../../Utilities/Utils.h"
#include "../../Utilities/Scanner.h"
#include "../../Utilities/ScanLine.h"

#include "OneRecord.h"

class RecordArray
{
public:
  RecordArray(int howMany);
  virtual ~RecordArray();

  //Getters//////////////////////////////////
  long getComparisonsBubble() const;
  long getComparisonsHeap() const;
  long getComparisonsInsertion() const;
  long getComparisonsQuick() const;
  long getComparisonsVariantBubble() const;
  long getNumElts() const;

  long getSwapsBubble() const;
  long getSwapsHeap() const;
  long getSwapsInsertion() const;
  long getSwapsQuick() const;
  long getSwapsVariantBubble() const;
  
  //Setters///////////////////////////////////////////
  void incNumElts();
  void incComparisonsBubble();
  void incComparisonsHeap();
  void incComparisonsInsertion();
  void incComparisonsQuick();
  void incComparisonsVariantBubble();

  void incSwapsBubble();
  void incSwapsHeap();
  void incSwapsInsertion();
  void incSwapsQuick();
  void incSwapsVariantBubble();

  void setNumElts();
  void setComparisonsBubble();
  void setComparisonsHeap();
  void setComparisonsInsertion();
  void setComparisonsQuick();
  void setComparisonsVariantBubble();

  void setSwapsBubble();
  void setSwapsHeap();
  void setSwapsInsertion();
  void setSwapsQuick();
  void setSwapsVariantBubble();

  //General functions//////////////////////////////////////
  void bubblesort();
  void variantBubblesort();
  void checkSort();
  void fixHeapDown(int heapLength);
  void fixHeapUp(int heapLength);
  void heapsort();
  void insertionsort();
  void quicksort();
  void quickSortStep();
  void readRecordArray();
  void swap();
  void writeRecordArray();

private:
  long comparisonsBubble;
  long comparisonsHeap;
  long comparisonsInsertion;
  long comparisonsQuick;
  long comparisonsVariantBubble;

  long swapsBubble;
  long swapsHeap;
  long swapsInsertion;
  long swapsQuick;
  long swapsVariantBubble;

  int numElts;
  vector<OneRecord> recs;
};

#endif 
