#include "RecordArray.h"

/******************************************************************************
 * Class 'RecordArray'
 *
 * Author/Copyright: John C. Quinn
 *                   Nicholas Wrobel
 *
 * Date last modified: 7 December 2014
**/

/******************************************************************************
 * Constructor
**/
RecordArray::RecordArray()
{
}

//Resizes the initialized vector to the number of items we need
RecordArray::RecordArray(int howManyItems)
{
  recs.resize(howManyItems);
}

/******************************************************************************
 * Destructor
**/
RecordArray::~RecordArray()
{
}

/*********************************************************************
 * Accessors.
**/
/*********************************************************************
 * Function to return the number of comparisons for a bubblesort.
 *
 * @return the 'long long' number of comparisons.
**/
long long RecordArray::getComparisonsBubble() const
{
  return this->comparisonsBubble;
}

/*********************************************************************
 * Function to return the number of comparisons for a heapsort.
 *
 * @return the 'long long' number of comparisons.
**/
long long RecordArray::getComparisonsHeap() const
{
  return this->comparisonsHeap;
}

/*********************************************************************
 * Function to return the number of comparisons for an insertionsort.
 *
 * @return the 'long long' number of comparisons.
**/
long long RecordArray::getComparisonsInsertion() const
{
  return this->comparisonsInsertion;
}

/*********************************************************************
 * Function to return the number of comparisons for a quicksort.
 *
 * @return the 'long long' number of comparisons.
**/
long long RecordArray::getComparisonsQuick() const
{
  return this->comparisonsQuick;
}

/*********************************************************************
 * Function to return the number of comparisons for a var bubblesort.
 *
 * @return the 'long long' number of comparisons.
**/
long long RecordArray::getComparisonsVariantBubble() const
{
  return this->comparisonsVariantBubble;
}

/*********************************************************************
 * Function to return the actual number of elements in the array.
 *
 * @return the 'long long' number of elements.
**/
int RecordArray::getNumElts() const
{
  return this->numElts;
}

/*********************************************************************
 * Function to return the number of swaps for a bubblesort.
 *
 * @return the 'long long' number of swaps.
**/
long long RecordArray::getSwapsBubble() const
{
  return this->swapsBubble;
}

/*********************************************************************
 * Function to return the number of swaps for a heapsort.
 *
 * @return the 'long long' number of swaps.
**/
long long RecordArray::getSwapsHeap() const
{
  return this->swapsHeap;
}

/*********************************************************************
 * Function to return the number of swaps for an insertionsort.
 *
 * @return the 'long long' number of swaps.
**/
long long RecordArray::getSwapsInsertion() const
{
  return this->swapsInsertion;
}

/*********************************************************************
 * Function to return the number of swaps for a quicksort.
 *
 * @return the 'long long' number of swaps.
**/
long long RecordArray::getSwapsQuick() const
{
  return this->swapsQuick;
}

/*********************************************************************
 * Function to return the number of swaps for a var bubblesort.
 *
 * @return the 'long long' number of swaps.
**/
long long RecordArray::getSwapsVariantBubble() const
{
  return this->swapsVariantBubble;
}

/*********************************************************************
 * Mutators.
**/
/*********************************************************************
 * Function to increment the number of elements in the array.
**/
void RecordArray::incNumElts()
{
  ++(this->numElts);
}

/*********************************************************************
 * Function to increment the number of comparisons in a bubblesort.
**/
void RecordArray::incComparisonsBubble()
{
  ++(this->comparisonsBubble);
}

/*********************************************************************
 * Function to increment the number of comparisons in a heapsort.
**/
void RecordArray::incComparisonsHeap()
{
  ++(this->comparisonsHeap);
}

/*********************************************************************
 * Function to increment the number of comparisons in an insertionsort.
**/
void RecordArray::incComparisonsInsertion()
{
  ++(this->comparisonsInsertion);
}

/*********************************************************************
 * Function to increment the number of comparisons in a quicksort.
**/
void RecordArray::incComparisonsQuick()
{
  ++(this->comparisonsQuick);
}

/*********************************************************************
 * Function to increment the number of comparisons in a var bubblesort.
**/
void RecordArray::incComparisonsVariantBubble()
{
  ++(this->comparisonsVariantBubble);
}

/*********************************************************************
 * Function to increment the number of swaps in a bubblesort.
**/
void RecordArray::incSwapsBubble()
{
  ++(this->swapsBubble);
}

/*********************************************************************
 * Function to increment the number of swaps in a heapsort.
**/
void RecordArray::incSwapsHeap()
{
  ++(this->swapsHeap);
}

/*********************************************************************
 * Function to increment the number of swaps in an insertionsort.
**/
void RecordArray::incSwapsInsertion()
{
  ++(this->swapsInsertion);
}

/*********************************************************************
 * Function to increment the number of swaps in an quicksort.
**/
void RecordArray::incSwapsQuick()
{
  ++(this->swapsQuick);
}

/*********************************************************************
 * Function to increment the number of swaps in a var bubblesort.
**/
void RecordArray::incSwapsVariantBubble()
{
  ++(this->swapsVariantBubble);
}

/*********************************************************************
 * Function to set the number of elements in the array.
 *
 * @param the 'long long' value to set.
**/
void RecordArray::setNumElts(int value)
{
  this->numElts = value;
}

/*********************************************************************
 * Function to set the number of comparisions in a bubblesort.
 *
 * @param the 'long long' value to set.
**/
void RecordArray::setComparisonsBubble(long long value)
{
  this->comparisonsBubble = value;
}

/*********************************************************************
 * Function to set the number of comparisions in a heapsort.
 *
 * @param the 'long long' value to set.
**/
void RecordArray::setComparisonsHeap(long long value)
{
  this->comparisonsHeap = value;
}

/*********************************************************************
 * Function to set the number of comparisions in an insertionsort.
 *
 * @param the 'long long' value to set.
**/
void RecordArray::setComparisonsInsertion(long long value)
{
  this->comparisonsInsertion = value;
}

/*********************************************************************
 * Function to set the number of comparisions in a quicksort.
 *
 * @param the 'long long' value to set.
**/
void RecordArray::setComparisonsQuick(long long value)
{
  this->comparisonsQuick = value;
}

/*********************************************************************
 * Function to set the number of comparisions in a var bubblesort.
 *
 * @param the 'long long' value to set.
**/
  void RecordArray::setComparisonsVariantBubble(long long value)
{
  this->comparisonsVariantBubble = value;
}

/*********************************************************************
 * Function to set the number of swaps in a bubblesort.
 *
 * @param the 'long long' value to set.
**/
void RecordArray::setSwapsBubble(long long value)
{
  this->swapsBubble = value;
}

/*********************************************************************
 * Function to set the number of swaps in a heapsort.
 *
 * @param the 'long long' value to set.
**/
void RecordArray::setSwapsHeap(long long value)
{
  this->swapsHeap = value;
}

/*********************************************************************
 * Function to set the number of swaps in an insertionsort.
 *
 * @param the 'long long' value to set.
**/
void RecordArray::setSwapsInsertion(long long value)
{
  this->swapsInsertion = value;
}

/*********************************************************************
 * Function to set the number of swaps in a quicksort.
 *
 * @param the 'long long' value to set.
**/
void RecordArray::setSwapsQuick(long long value)
{
  this->swapsQuick = value;
}

/*********************************************************************
 * Function to set the number of swaps in a var bubblesort.
 *
 * @param the 'long long' value to set.
**/
void RecordArray::setSwapsVariantBubble(long long value)
{
  this->swapsVariantBubble = value;
}

/*********************************************************************
 * General functions.
**/

/*********************************************************************
 * Function to do the bubblesort.
**/
void RecordArray::bubblesort(ofstream& outStream)
{
  int localSwaps = 0;

  this->setComparisonsBubble(0);
  this->setSwapsBubble(0);

  for(int i = this->getNumElts()-2; i >= 0; --i)
  {
    localSwaps = 0;
    for(int j = 0; j <= i; ++j)
    {
      this->incComparisonsBubble();
      if(recs[j] > recs[j+1])
      {
        this->swap(j,j+1);
        this->incSwapsBubble();
        ++localSwaps;
      }
    } // for(int j = 0; j <= i; ++j)

    if(localSwaps == 0)
    {
      outStream << "Early exit at bubblesort" << endl;
      break;
    }
        
  } // for(int i = this.getNumElts()-1; i >= 0; --i)

} // void bubblesort()

/*********************************************************************
 * Function to do the variant bubblesort.
**/
void RecordArray::variantbubblesort()
{
  bool didSwap;

  this->setComparisonsVariantBubble(0);
  this->setSwapsVariantBubble(0);

  didSwap = true;
  int length = this->getNumElts()-1;
  while(didSwap)
  {
    didSwap = false;
    for(int i = 0; i < length; ++i)
    {
      this->incComparisonsVariantBubble();
      if(recs[i] > recs[i+1])
      {
        this->swap(i,i+1);
        this->incSwapsVariantBubble();
        didSwap = true;
      }
    }
    --length;
  }

} //  void variantbubblesort()

/*********************************************************************
 * Function to check that the array is in fact sorted.
**/
void RecordArray::checkSort(ofstream& outStream)
{
  for(int i = 0; i < this->getNumElts()-1; ++i)
  {
    if(recs[i] > recs[i+1])
    {
      outStream << "Error: records are not sorted" << endl;
      return;
    }
  } // for(long long i = 0; i < this.getNumElts()-1; ++i)
} //  void checkSort()

/*********************************************************************
* Function to fix the heap going down.
**/
void RecordArray::fixHeapDown(int heapLength)
{
  int insertSub,largerChild,leftChild,rightChild;

  insertSub = 0;
  leftChild = 2*insertSub + 1;
  rightChild = 2*insertSub + 2;

  while(heapLength >= leftChild)
  {
      largerChild = leftChild;
      if(heapLength >= rightChild)
      {
        this->incComparisonsHeap();
        if(this->recs[leftChild] < this->recs[rightChild])
        {
          largerChild = rightChild;
        }
      }

      this->incComparisonsHeap();
      if(this->recs[insertSub] < this->recs[largerChild])
      {
        this->incSwapsHeap();
        this->swap(insertSub,largerChild);
        insertSub = largerChild;
        leftChild = 2*insertSub + 1;
        rightChild = 2*insertSub + 2;
      }
      else break;
    }
  } //  void fixHeapDown(int heapLength)

/*********************************************************************
 * Function to fix the heap going up.
**/
void RecordArray::fixHeapUp(int insertSub)
{
  int parentSub;
  OneRecord insertRec;

  insertRec = this->recs[insertSub];
  parentSub = (insertSub-1)/2;

  while(0 < insertSub)
  {
    this->incComparisonsHeap();
    if(this->recs[parentSub] < insertRec)
    {
      this->swap(insertSub,parentSub);
      this->incSwapsHeap();

      insertSub = parentSub;
      insertRec = this->recs[insertSub];
      parentSub = (insertSub-1)/2;

    }
    else
      break;

  } // while(0 < insertSub)
} //  void fixHeapUp(long long insertSub)

/*********************************************************************
 * Function to do the heapsort.
**/
void RecordArray::heapsort()
{
  this->setComparisonsHeap(0);
  this->setSwapsHeap(0);

  //********************************************************************
  // First we build the heap.  This uses the O(n log n) insertion
  // function and not the O(n) bottom up function, but that's ok for the
  // moment. 
  for(int i = 1; i < this->getNumElts(); ++i)
  {
    this->fixHeapUp(i);
  } // for(long long i = 0; i < this.getNumElts(); ++i)

  //********************************************************************
  // Now we sort the heap.
  for(int i = this->getNumElts()-1; i >= 0; --i)
  {
    this->incSwapsHeap();
    this->swap(0,i);
    this->fixHeapDown(i-1);
  } // for(long long i = this.getNumElts(); i >= 0; --i)
} //  void heapsort() 

/*********************************************************************
* Function to do the insertionsort.
**/
void RecordArray::insertionsort()
{
  int insertionSub;

  this->setComparisonsInsertion(0);
  this->setSwapsInsertion(0);
  for(int i = this->getNumElts()-2; i >= 0; --i)
  {
    insertionSub = i;
    for(int j = i+1; j < this->getNumElts(); ++j)
    {
      this->incComparisonsInsertion();
      if(recs[insertionSub] > recs[j])
      {
        this->swap(insertionSub,j);
        insertionSub = j;
        this->incSwapsInsertion();
      }
      else
      {
        break;
      }
    }
  }
} //  void insertionsort()

/*****************************************************************************
 * Function to do the quicksort by recursive call to the substep.
**/
void RecordArray::quicksort()
{
  this->setComparisonsQuick(0);
  this->setSwapsQuick(0);
  this->quickSortStep(0, this->getNumElts() - 1);
}

/*********************************************************************
 * Function to do the quicksort.
**/
void RecordArray::quickSortStep(int leftBound, int rightBound)
{
  if(leftBound >= rightBound) return;

  long long pivot = this->recs[rightBound].getElement();
  int leftIndex = leftBound;
  int rightIndex = rightBound - 1;
  while(leftIndex <= rightIndex)
  {
    while((leftIndex <= rightIndex) && 
                              (this->recs[leftIndex].getElement() <= pivot))
    {
      this->incComparisonsQuick();
      ++leftIndex;
    }

    while((leftIndex <= rightIndex) && 
                                (this->recs[rightIndex].getElement() >= pivot))
    {
      this->incComparisonsQuick();
      --rightIndex;
    }

    if(leftIndex < rightIndex)
    {
      this->incSwapsQuick();
      this->swap(leftIndex,rightIndex);
    } // if(leftIndex < rightIndex)

  } // while(leftIndex <= rightIndex)

  this->incSwapsQuick();
  this->swap(leftIndex,rightBound);
  quickSortStep(leftBound,leftIndex-1);
  quickSortStep(leftIndex+1,rightBound);
}

/*********************************************************************
 * Function to read the array of records.
 *
 * @param inFile the 'Scanner' file from which to read.
**/
void RecordArray::readRecordArray(Scanner& inFile)
{
  this->setNumElts(0);
  while(inFile.hasNext())
  {
    OneRecord newRecord;
    newRecord.readElement(inFile);
    recs[this->getNumElts()] = newRecord;
    this->incNumElts();
  } // while(inFile.hasNext())

} //  void readRecordArray(Scanner inFile)

/*********************************************************************
* Function to swap two records in the array.
*
* @param i the subscript of the first record.
* @param j the subscript of the second record.
**/
void RecordArray::swap(int i,int j)
{
  OneRecord temp;
  temp = recs[i];
  recs[i] = recs[j];
  recs[j] = temp;
} //  void RecordArray::swap(int i,int j)

/*********************************************************************
 * Function to write the array of records.
**/
void RecordArray::writeRecordArray(ofstream& outStream)
{
  outStream << "Dumping record array to the output:" << endl;

  for(int i = 0; i < this->getNumElts(); ++i)
  {
    outStream << recs[i].toString() << endl;
  } // for(long long i = 0; i < this-> getNumElts(); ++i)

  outStream << "End of dumped records" << endl;
} //  void RecordArray::writeRecordArray(Scanner inFile)








