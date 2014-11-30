import java.util.Scanner;
/*********************************************************************
 * This class is for an array of 'OneRecord' records to be used for
 * bubblesorting, insertionsorting, quicksorting, etc.
 *
 * @author Duncan Buell
**/
public class RecordArray
{
/*********************************************************************
 * Instance variables for the class.
**/
  private static final String TAG = "RecordArray: ";

  private long comparisonsBubble;
  private long comparisonsHeap;
  private long comparisonsInsertion;
  private long comparisonsQuick;
  private long comparisonsVariantBubble;

  private long swapsBubble;
  private long swapsHeap;
  private long swapsInsertion;
  private long swapsQuick;
  private long swapsVariantBubble;

  private int numElts;
  private OneRecord [] recs;

/*********************************************************************
 * Constructor.
**/
  public RecordArray(int howMany)
  {
    this.recs = new OneRecord[howMany];
    this.setNumElts(0);
  }

/*********************************************************************
 * Accessors.
**/
/*********************************************************************
 * Method to return the number of comparisons for a bubblesort.
 *
 * @return the 'long' number of comparisons.
**/
  public long getComparisonsBubble()
  {
    return this.comparisonsBubble;
  }

/*********************************************************************
 * Method to return the number of comparisons for a heapsort.
 *
 * @return the 'long' number of comparisons.
**/
  public long getComparisonsHeap()
  {
    return this.comparisonsHeap;
  }

/*********************************************************************
 * Method to return the number of comparisons for an insertionsort.
 *
 * @return the 'long' number of comparisons.
**/
  public long getComparisonsInsertion()
  {
    return this.comparisonsInsertion;
  }

/*********************************************************************
 * Method to return the number of comparisons for a quicksort.
 *
 * @return the 'long' number of comparisons.
**/
  public long getComparisonsQuick()
  {
    return this.comparisonsQuick;
  }

/*********************************************************************
 * Method to return the number of comparisons for a var bubblesort.
 *
 * @return the 'long' number of comparisons.
**/
  public long getComparisonsVariantBubble()
  {
    return this.comparisonsVariantBubble;
  }

/*********************************************************************
 * Method to return the actual number of elements in the array.
 *
 * @return the 'long' number of elements.
**/
  public int getNumElts()
  {
    return this.numElts;
  }

/*********************************************************************
 * Method to return the number of swaps for a bubblesort.
 *
 * @return the 'long' number of swaps.
**/
  public long getSwapsBubble()
  {
    return this.swapsBubble;
  }

/*********************************************************************
 * Method to return the number of swaps for a heapsort.
 *
 * @return the 'long' number of swaps.
**/
  public long getSwapsHeap()
  {
    return this.swapsHeap;
  }

/*********************************************************************
 * Method to return the number of swaps for an insertionsort.
 *
 * @return the 'long' number of swaps.
**/
  public long getSwapsInsertion()
  {
    return this.swapsInsertion;
  }

/*********************************************************************
 * Method to return the number of swaps for a quicksort.
 *
 * @return the 'long' number of swaps.
**/
  public long getSwapsQuick()
  {
    return this.swapsQuick;
  }

/*********************************************************************
 * Method to return the number of swaps for a var bubblesort.
 *
 * @return the 'long' number of swaps.
**/
  public long getSwapsVariantBubble()
  {
    return this.swapsVariantBubble;
  }

/*********************************************************************
 * Mutators.
**/
/*********************************************************************
 * Method to increment the number of elements in the array.
**/
  private void incNumElts()
  {
    ++(this.numElts);
  }

/*********************************************************************
 * Method to increment the number of comparisons in a bubblesort.
**/
  private void incComparisonsBubble()
  {
    ++(this.comparisonsBubble);
  }

/*********************************************************************
 * Method to increment the number of comparisons in a heapsort.
**/
  private void incComparisonsHeap()
  {
    ++(this.comparisonsHeap);
  }

/*********************************************************************
 * Method to increment the number of comparisons in an insertionsort.
**/
  private void incComparisonsInsertion()
  {
    ++(this.comparisonsInsertion);
  }

/*********************************************************************
 * Method to increment the number of comparisons in a quicksort.
**/
  private void incComparisonsQuick()
  {
    ++(this.comparisonsQuick);
  }

/*********************************************************************
 * Method to increment the number of comparisons in a var bubblesort.
**/
  private void incComparisonsVariantBubble()
  {
    ++(this.comparisonsVariantBubble);
  }

/*********************************************************************
 * Method to increment the number of swaps in a bubblesort.
**/
  private void incSwapsBubble()
  {
    ++(this.swapsBubble);
  }

/*********************************************************************
 * Method to increment the number of swaps in a heapsort.
**/
  private void incSwapsHeap()
  {
    ++(this.swapsHeap);
  }

/*********************************************************************
 * Method to increment the number of swaps in an insertionsort.
**/
  private void incSwapsInsertion()
  {
    ++(this.swapsInsertion);
  }

/*********************************************************************
 * Method to increment the number of swaps in an quicksort.
**/
  private void incSwapsQuick()
  {
    ++(this.swapsQuick);
  }

/*********************************************************************
 * Method to increment the number of swaps in a var bubblesort.
**/
  private void incSwapsVariantBubble()
  {
    ++(this.swapsVariantBubble);
  }

/*********************************************************************
 * Method to set the number of elements in the array.
 *
 * @param the 'long' value to set.
**/
  private void setNumElts(int value)
  {
    this.numElts = value;
  }

/*********************************************************************
 * Method to set the number of comparisions in a bubblesort.
 *
 * @param the 'long' value to set.
**/
  private void setComparisonsBubble(long value)
  {
    this.comparisonsBubble = value;
  }

/*********************************************************************
 * Method to set the number of comparisions in a heapsort.
 *
 * @param the 'long' value to set.
**/
  private void setComparisonsHeap(long value)
  {
    this.comparisonsHeap = value;
  }

/*********************************************************************
 * Method to set the number of comparisions in an insertionsort.
 *
 * @param the 'long' value to set.
**/
  private void setComparisonsInsertion(long value)
  {
    this.comparisonsInsertion = value;
  }

/*********************************************************************
 * Method to set the number of comparisions in a quicksort.
 *
 * @param the 'long' value to set.
**/
  public void setComparisonsQuick(long value)
  {
    this.comparisonsQuick = value;
  }

/*********************************************************************
 * Method to set the number of comparisions in a var bubblesort.
 *
 * @param the 'long' value to set.
**/
  private void setComparisonsVariantBubble(long value)
  {
    this.comparisonsVariantBubble = value;
  }

/*********************************************************************
 * Method to set the number of swaps in a bubblesort.
 *
 * @param the 'long' value to set.
**/
  private void setSwapsBubble(long value)
  {
    this.swapsBubble = value;
  }

/*********************************************************************
 * Method to set the number of swaps in a heapsort.
 *
 * @param the 'long' value to set.
**/
  private void setSwapsHeap(long value)
  {
    this.swapsHeap = value;
  }

/*********************************************************************
 * Method to set the number of swaps in an insertionsort.
 *
 * @param the 'long' value to set.
**/
  private void setSwapsInsertion(long value)
  {
    this.swapsInsertion = value;
  }

/*********************************************************************
 * Method to set the number of swaps in a quicksort.
 *
 * @param the 'long' value to set.
**/
  private void setSwapsQuick(long value)
  {
    this.swapsQuick = value;
  }

/*********************************************************************
 * Method to set the number of swaps in a var bubblesort.
 *
 * @param the 'long' value to set.
**/
  private void setSwapsVariantBubble(long value)
  {
    this.swapsVariantBubble = value;
  }

/*********************************************************************
 * General methods.
**/

/*********************************************************************
 * Method to do the bubblesort.
**/
  public void bubblesort()
  {
    int localSwaps;

    this.setComparisonsBubble(0);
    this.setSwapsBubble(0);

    for(int i = this.getNumElts()-2; i >= 0; --i)
    {
      localSwaps = 0;
      for(int j = 0; j <= i; ++j)
      {
        this.incComparisonsBubble();
        if(recs[j].compare(recs[j+1].getElement()) > 0)
        {
          this.swap(j,j+1);
          this.incSwapsBubble();
          ++localSwaps;
        }
      } // for(int j = 0; j <= i; ++j)

      if(localSwaps == 0)
      {
        FileUtils.logFile.printf("early exit %d%n", i);
        FileUtils.logFile.flush();
        break;
      }
          
    } // for(int i = this.getNumElts()-1; i >= 0; --i)

  } // public void bubblesort()

/*********************************************************************
 * Method to do the variant bubblesort.
**/
  public void variantbubblesort()
  {
    boolean didSwap;

    this.setComparisonsVariantBubble(0);
    this.setSwapsVariantBubble(0);

    didSwap = true;
    int length = this.getNumElts()-1;
    while(didSwap)
    {
      didSwap = false;
      for(int i = 0; i < length; ++i)
      {
        this.incComparisonsVariantBubble();
        if(recs[i].compare(recs[i+1].getElement()) > 0)
        {
          this.swap(i,i+1);
          this.incSwapsVariantBubble();
          didSwap = true;
        }
      }
      --length;
    }

  } // public void variantbubblesort()

/*********************************************************************
 * Method to check that the array is in fact sorted.
**/
  public void checkSort()
  {
    for(int i = 0; i < this.getNumElts()-1; ++i)
    {
      if(recs[i].compare(recs[i+1].getElement()) > 0)
      {
        FileUtils.logFile.printf("%s ERROR (%d %s) (%d %s)%n",TAG,
               i,recs[i].toString(),i+1,recs[i+1].toString());
        System.exit(1);
      }
    } // for(long i = 0; i < this.getNumElts()-1; ++i)
  } // public void checkSort()

/*********************************************************************
 * Method to fix the heap going down.
**/
  public void fixHeapDown(int heapLength)
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
        this.incComparisonsHeap();
        if(this.recs[leftChild].compare(this.recs[rightChild].getElement()) < 0)
        {
          largerChild = rightChild;
        }
      }

      this.incComparisonsHeap();
      if(this.recs[insertSub].compare(this.recs[largerChild].getElement()) < 0)
      {
        this.incSwapsHeap();
        this.swap(insertSub,largerChild);
        insertSub = largerChild;
        leftChild = 2*insertSub + 1;
        rightChild = 2*insertSub + 2;
      }
      else
        break;

    }
  } // public void fixHeapDown(int heapLength)

/*********************************************************************
 * Method to fix the heap going up.
**/
  public void fixHeapUp(int insertSub)
  {
    int parentSub;
    OneRecord insertRec;

    insertRec = this.recs[insertSub];
    parentSub = (insertSub-1)/2;

    while(0 < insertSub)
    {
      this.incComparisonsHeap();
      if(this.recs[parentSub].compare(insertRec.getElement()) < 0)
      {
        this.swap(insertSub,parentSub);
        this.incSwapsHeap();

        insertSub = parentSub;
        insertRec = this.recs[insertSub];
        parentSub = (insertSub-1)/2;

      }
      else
        break;

    } // while(0 < insertSub)
  } // public void fixHeapUp(long insertSub)

/*********************************************************************
 * Method to do the heapsort.
**/
  public void heapsort()
  {
    this.setComparisonsHeap(0);
    this.setSwapsHeap(0);

    //********************************************************************
    // First we build the heap.  This uses the O(n log n) insertion
    // method and not the O(n) bottom up method, but that's ok for the
    // moment. 
    for(int i = 1; i < this.getNumElts(); ++i)
    {
      this.fixHeapUp(i);
    } // for(long i = 0; i < this.getNumElts(); ++i)

    //********************************************************************
    // Now we sort the heap.
    for(int i = this.getNumElts()-1; i >= 0; --i)
    {
      this.incSwapsHeap();
      this.swap(0,i);
      this.fixHeapDown(i-1);
    } // for(long i = this.getNumElts(); i >= 0; --i)
  } // public void heapsort()

/*********************************************************************
 * Method to do the insertionsort.
**/
  public void insertionsort()
  {
    int insertionSub;

    this.setComparisonsInsertion(0);
    this.setSwapsInsertion(0);
    for(int i = this.getNumElts()-2; i >= 0; --i)
    {
      insertionSub = i;
      for(int j = i+1; j < this.getNumElts(); ++j)
      {
        this.incComparisonsInsertion();
        if(recs[insertionSub].compare(recs[j].getElement()) > 0)
        {
          this.swap(insertionSub,j);
          insertionSub = j;
          this.incSwapsInsertion();
        }
        else
        {
          break;
        }
      }
    }
  } // public void insertionsort()

/*********************************************************************
 * Method to do the quicksort by recursive call to the substep.
**/
  public void quicksort()
  {
    this.setComparisonsQuick(0);
    this.setSwapsQuick(0);
    quickSortStep(0,this.getNumElts()-1);
  }

/*********************************************************************
 * Method to do the quicksort.
**/
  public void quickSortStep(int leftBound,int rightBound)
  {
    if(leftBound >= rightBound) return;

    long pivot = this.recs[rightBound].getElement();
    int leftIndex = leftBound;
    int rightIndex = rightBound - 1;
    while(leftIndex <= rightIndex)
    {

      while((leftIndex <= rightIndex) && (this.recs[leftIndex].getElement() <= pivot))
      {
        this.incComparisonsQuick();
        ++leftIndex;
      }

      while((leftIndex <= rightIndex) && (this.recs[rightIndex].getElement() >= pivot))
      {
        this.incComparisonsQuick();
        --rightIndex;
      }

      if(leftIndex < rightIndex)
      {
        this.incSwapsQuick();
        this.swap(leftIndex,rightIndex);
      } // if(leftIndex < rightIndex)

    } // while(leftIndex <= rightIndex)

    this.incSwapsQuick();
    this.swap(leftIndex,rightBound);
    quickSortStep(leftBound,leftIndex-1);
    quickSortStep(leftIndex+1,rightBound);
  } // public void quickSortStep(long leftBound,long rightBound)

/*********************************************************************
 * Method to read the array of records.
 *
 * @param inFile the 'Scanner' file from which to read.
**/
  public void readRecordArray(Scanner inFile)
  {
    this.setNumElts(0);
    while(inFile.hasNext())
    {
      OneRecord newRecord = new OneRecord();
      newRecord.readElement(inFile);
      recs[this.getNumElts()] = newRecord;
      this.incNumElts();
    } // while(inFile.hasNext())

  } // public void readRecordArray(Scanner inFile)

/*********************************************************************
 * Method to swap two records in the array.
 *
 * @param i the subscript of the first record.
 * @param j the subscript of the second record.
**/
  public void swap(int i,int j)
  {
    OneRecord temp = new OneRecord();
    temp = recs[i];
    recs[i] = recs[j];
    recs[j] = temp;
  } // public void swap(int i,int j)

/*********************************************************************
 * Method to write the array of records.
**/
  public void writeRecordArray()
  {
    String s = "";
    for(int i = 0; i < this.getNumElts(); ++i)
    {

      s = String.format("%s %6d %s%n",TAG,i,recs[i].toString());
      FileUtils.logFile.printf("%s",s);
    } // for(long i = 0; i < this.getNumElts(); ++i)

  } // public void writeRecordArray(Scanner inFile)

} // public class RecordArray

