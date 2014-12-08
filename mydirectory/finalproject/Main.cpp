#include "Main.h"

/****************************************************************
 * Main program for the final project
 *
 * Author/Copyright: John C. Quinn
 * Date last modified: 3 November 2014
 *
**/


static const string TAG = "Main: ";

int main(int argc, char *argv[])
{
  string inFileName = "";
  string outFileName = "";
  string logFileName = "";
  ofstream outStream;

  Scanner scanner;
  SortingTester tester;

  Utils::CheckArgs(3, argc, argv, "infilename outfilename logfilename");
  inFileName = static_cast<string>(argv[1]);
  outFileName = static_cast<string>(argv[2]);
  logFileName = static_cast<string>(argv[3]);

  Utils::LogFileOpen(logFileName);
  Utils::FileOpen(outStream, outFileName); 

  Utils::logStream << TAG << "Beginning execution\n";
  Utils::logStream.flush();

  Utils::logStream << TAG << "infile  '" << inFileName << "'\n";
  Utils::logStream << TAG << "outfile '" << outFileName << "'\n";
  Utils::logStream << TAG << "logfile '" << logFileName << "'\n";

  scanner.openFile(inFileName);

  tester.testRecords(scanner);

  Utils::logStream << TAG << "Ending execution\n";
  Utils::logStream.flush();

  Utils::FileClose(outStream);
  Utils::FileClose(Utils::logStream);

  return 0;
}
