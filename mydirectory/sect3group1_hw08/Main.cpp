#include "Main.h"

/*******************************************************************************
 * Main program for Homework 8.
 * This program tests various sorting routines on an array of 
 * 'OneRecord', each which contain a long integer. Each sort
 * is timed and the number of swaps and comparisons are logged.
 *
 * This main program simply calls a function in 'SortRoutines', which does
 * all the actual testing.
 *
 * Author/copyright: Nicholas Wrobel 
 *                   John Quinn
 *
 * Date: 28 November 2014
 *
**/
int main(int argc, char *argv[])
{
  string outFileName = "";
  ofstream outStream;

  Utils::CheckArgs(1, argc, argv, "outfilename");
  outFileName = static_cast<string>(argv[1]);

  Utils::FileOpen(outStream, outFileName);

  SortRoutines sort;
  sort.doTheWork(outStream);

  Utils::FileClose(outStream);
  return 0;
}
