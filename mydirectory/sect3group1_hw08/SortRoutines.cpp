#include "SortRoutines.h"

/*****************************************************************************
 * Object for the Main program for Homework 8 that does the work.
 * This program tests various sorting routines on an array of 
 * 'OneRecord', each which contain a long integer. Each sort
 * is timed and the number of swaps and comparisons are logged.
 *
 * Author/copyright: Nicholas Wrobel 
 *                   John Quinn
 *
 * Date: 28 November 2014
 *
**/
static const string TAG = "Main: ";

/*****************************************************************************
 * Constructor and destructor
**/
SortRoutines::SortRoutines()
{
}

SortRoutines::~SortRoutines()
{
}

/*****************************************************************************
 * General functions
**/

/*****************************************************************************
 * Function 'doTheWork'
 * This function runs through all sorting routines. It does each sorting 
 * routine on each given # of records 4 times, printing the results of the
 * sortings to the output file. 
 *
 * Parameters
 *    outStream: the output stream to write to
**/
void SortRoutines::doTheWork(ofstream& outStream)
{
  //the # of times we are to repeat record sorting for a single number of recs
  int howManyReps = 0;  
  RecordArray recs;
  string dataFileName = "";

  //the record count vector, holds the # of records we are going to sort later
  vector<int> recordCounts;   
  vector<int>::iterator iter;

  howManyReps = 4;
  dataFileName = "dataFile";

  //specify record counts here
  recordCounts.push_back(127);
  recordCounts.push_back(511);
  recordCounts.push_back(2047);
  recordCounts.push_back(8191);
  recordCounts.push_back(32767);
  recordCounts.push_back(131071);
  recordCounts.push_back(524287);

  outStream << "Starting the computation" << endl;

  //outer loop to process each record count
  for(iter = recordCounts.begin(); iter != recordCounts.end(); iter++)
  {
    int currentRecordCount = (*iter);
    outStream << TAG << "count " << currentRecordCount << endl;

    //inner loop to repeat the sort routine for the # of reps (4)
    for(int reps = 1; reps <= howManyReps; reps++)
    {
      outStream << TAG << "repetition " << reps << endl;

      //create a data file with the # of records so we have some data to sort
      createDataFile(dataFileName, currentRecordCount, outStream);

      //For each of the following sorts, we read the records into the record
      //array (see readTheRecords function later), do a time call before and
      //after calling the sortroutine, output the current repetition, record
      //count, comparisions, swaps, and milliseconds, and check to ensure the
      //data was sorted.

      //BUBBLESORT////////////////////////////////////////////////////////////
      recs = readTheRecords(dataFileName, currentRecordCount, outStream);
      outStream << "Do the bubblesort" << endl;
      
      Utils::timecall("Bubblesort");
      recs.bubblesort(outStream);
      string time = Utils::timecall("Bubblesort");

      outStream << "Bubblesort: timing info\n" << time;

      outStream << "Bubble(currentRep,data,comps,swaps)" << reps 
        << " " << currentRecordCount << " " << recs.getComparisonsBubble() 
        << " " << recs.getSwapsBubble()  << endl;

      recs.checkSort(outStream);  
      outStream << endl << endl;

      //VARIANT BUBBLESORT////////////////////////////////////////////////////
      recs = readTheRecords(dataFileName, currentRecordCount, outStream);
      outStream << "Do the variant bubblesort" << endl;
      
      Utils::timecall("VBubblesort");
      recs.variantbubblesort();
      time = Utils::timecall("VBubblesort");

      outStream << "VBubblesort: timing info\n" << time;

      outStream << "VBubble(currentRep,data,comps,swaps)" << reps 
        << " " << currentRecordCount << " " 
        << recs.getComparisonsVariantBubble() << " " 
        << recs.getSwapsVariantBubble() << endl;

      recs.checkSort(outStream);
      outStream << endl << endl;

      //INSERTION SORT////////////////////////////////////////////////////////
      recs = readTheRecords(dataFileName, currentRecordCount, outStream);
      outStream << "Do the insertion sort" << endl;
      
      Utils::timecall("Insertionsort");
      recs.insertionsort();
      time = Utils::timecall("Insertionsort");

      outStream << "Insertionsort: timing info\n" << time;

      outStream << "Insertion(currentRep,data,comps,swaps)" << reps 
        << " " << currentRecordCount << " " << recs.getComparisonsInsertion() 
        << " " << recs.getSwapsInsertion() << endl;

      recs.checkSort(outStream);
      outStream << endl << endl;

      //QUICKSORT////////////////./////////////////////////////////////////////
      recs = readTheRecords(dataFileName, currentRecordCount, outStream);
      outStream << "Do the quicksort" << endl;
      
      Utils::timecall("Quicksort");
      recs.quicksort();
      time = Utils::timecall("Quicksort");

      outStream << "Quicksort: timing info\n" << time;

      outStream << "Quick(currentRep,data,comps,swaps)" << reps 
        << " " << currentRecordCount << " " << recs.getComparisonsQuick() 
        << " " << recs.getSwapsQuick() << endl;

      recs.checkSort(outStream);
      outStream << endl << endl;

      //HEAPSORT/////////////////./////////////////////////////////////////////
      recs = readTheRecords(dataFileName, currentRecordCount, outStream);
      outStream << "Do the heapsort" << endl;
      
      Utils::timecall("Heapsort");
      recs.heapsort();
      time = Utils::timecall("Heapsort");

      outStream << "Heapsort: timing info\n" << time;

      outStream << "Heap(currentRep,data,comps,swaps)" << reps 
        << " " << currentRecordCount << " " << recs.getComparisonsHeap() 
        << " " << recs.getSwapsHeap() << endl;

      recs.checkSort(outStream);
      outStream << endl;
      outStream << "========================Beginning a new rep=============================" << endl;

    } //for(int reps = 1; reps <= howManyReps; reps++)
  } //for(iter = recordCounts.begin(); iter != recordCounts.end(); iter++)
}

/*****************************************************************************
 * Function 'createDataFile'
 * This function creates a data file consisting of random numbers. This is 
 * to be read and used to create an array of records later. Numbers are 
 * generated using rand() and are seeded by the SEED as defined in the header.
 * 
 * Parameters
 *    filename: what to name the data file
 *    howManyItems: number of data items to create
 *    outStream: output stream to write to
**/
void SortRoutines::createDataFile(string filename, int howManyItems, 
                                                  ofstream& outStream)
{
  long randomData = 0;
  ofstream datastream;

  outStream << TAG << "creating data file " << filename 
             << " with " << howManyItems << " elements" << endl;

  srand(SEED);
  Utils::FileOpen(datastream, filename);

  //generate a random number between 0 and 999,999,999 and write it to a 
  //stream how many times
  for(int i = 0; i < howManyItems; i++)
  {
    randomData = rand() % 999999999;
    datastream << randomData << endl;
  }

  //close the file
  Utils::FileClose(datastream);

  outStream << TAG << "data file created " << endl; 

}

/*****************************************************************************
 * Function 'readTheRecords;
 * This function takes a data file and opens a scanner, passing this scanner
 * off to another function that actually reads the data and creates a record
 * array.
 *
 * Parameters
 *    filename: the input data file name
 *    howManyItems: number of items in the input data file
 *    outStream: the stream to write to
**/
RecordArray SortRoutines::readTheRecords(string filename, int howManyItems, 
                                                      ofstream& outStream)
{
  RecordArray recs;
  Scanner scanner;

  outStream << TAG << "reading " << howManyItems  
             << " from data file " << filename << endl;

  recs = RecordArray(howManyItems);
  scanner.openFile(filename);

  recs.readRecordArray(scanner);
  scanner.close();

  outStream << TAG << "reading done" << endl;

  return recs;
}

