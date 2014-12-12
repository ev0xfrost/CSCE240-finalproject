/****************************************************************************
 * Header file for the RecordArray class
 * Note: we call it RecordArray, but we use a vector as underlying storage.

 * Author/copyright: Nicholas Wrobel 
 *                   John Quinn 
 *
 * Date: 27 November 2014
 *
**/
#ifndef RECORDARRAY_H
#define RECORDARRAY_H

#include <vector>
#include <iostream>
using namespace std;

#include "Utils.h"
#include "Scanner.h"
#include "ScanLine.h"
#include "OneRecord.h"

class RecordArray
{
public:
  RecordArray();
  RecordArray(int numberOfItems);
  virtual ~RecordArray();

  //Getters//////////////////////////////////
  long long getComparisonsBubble() const;
  long long getComparisonsHeap() const;
  long long getComparisonsInsertion() const;
  long long getComparisonsQuick() const;
  long long getComparisonsVariantBubble() const;
  int getNumElts() const;

  long long getSwapsBubble() const;
  long long getSwapsHeap() const;
  long long getSwapsInsertion() const;
  long long getSwapsQuick() const;
  long long getSwapsVariantBubble() const;
  
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

  void setNumElts(int value);
  void setComparisonsBubble(long long value);
  void setComparisonsHeap(long long value);
  void setComparisonsInsertion(long long value);
  void setComparisonsQuick(long long value);
  void setComparisonsVariantBubble(long long value);

  void setSwapsBubble(long long value);
  void setSwapsHeap(long long value);
  void setSwapsInsertion(long long value);
  void setSwapsQuick(long long value);
  void setSwapsVariantBubble(long long value);

  //General functions//////////////////////////////////////
  void bubblesort(ofstream& outStream);
  void variantbubblesort();
  void checkSort(ofstream& outStream);
  void fixHeapDown(int heapLength);
  void fixHeapUp(int heapLength);
  void heapsort();
  void insertionsort();
  void quicksort();
  void quickSortStep(int leftBound, int rightBound);
  void readRecordArray(Scanner& inFile);
  void swap(int i, int j);
  void writeRecordArray(ofstream& outStream);

private:
  long long comparisonsBubble;
  long long comparisonsHeap;
  long long comparisonsInsertion;
  long long comparisonsQuick;
  long long comparisonsVariantBubble;

  long long swapsBubble;
  long long swapsHeap;
  long long swapsInsertion;
  long long swapsQuick;
  long long swapsVariantBubble;

  int numElts;
  vector<OneRecord> recs;
};

#endif 
