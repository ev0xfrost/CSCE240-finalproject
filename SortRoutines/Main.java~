import java.io.PrintWriter;
// import java.util.Iterator;
import java.util.Scanner;
/*********************************************************************
 * This class is for testing various simple sorting routines on an
 * array of integers.
 *
 * @author Duncan Buell
**/
public class Main
{
/*********************************************************************
 * Instance variables.
**/
  static final String TAG = "Main: ";
  static int zork;
  static long timeBegin;
  static long timeEnd;

/*********************************************************************
 * Method to create a data file.
 * Note that this uses the 'zork' variable as static so as to generate
 * different data with each iteration.
 *
 * @param fileName the 'String' name of the data file.
 * @param howMany the 'int' number of records to create.
**/
  private static void createDataFile(String fileName,int howMany)
  {
    PrintWriter dataFile = null;

    FileUtils.logFile.printf("%s create %d records as file '%s'%n",
                             TAG,howMany,fileName);
    dataFile = FileUtils.PrintWriterOpen(fileName);
    for(int i = 0; i < howMany; ++i)
    {
      dataFile.printf("%10d%n",zork);
      zork = (zork * 9973) % 99991;
    }
    FileUtils.closeFile(dataFile);
    FileUtils.logFile.printf("%s done creating records%n",TAG);
  } // private void createDataFile(String fileName,int howMany)

/*********************************************************************
 * Method to read a data file.
 *
 * @param fileName the 'String' name of the data file.
 * @param howMany the 'int' number of records to create.
**/
  private static RecordArray readTheRecords(String fileName,int howMany)
  {
    Scanner inFile = null;
    RecordArray recs;

    FileUtils.logFile.printf("%s read %d records from file '%s'%n",
                             TAG,howMany,fileName);
    inFile = FileUtils.ScannerOpen("dataFile");

    recs = new RecordArray(howMany);

    recs.readRecordArray(inFile);
    FileUtils.closeFile(inFile);

    FileUtils.logFile.printf("%s done reading records%n",TAG);
    return recs;
  } // private static RecordArray readTheRecords(String fileName,int howMany)

/*********************************************************************
 * Main method.
**/
  public static void main (String[] args)
  {
//    int [] recordCounts = {127};
//    int [] recordCounts = {511};
    int [] recordCounts = {127,511,2047};
//    int [] recordCounts = {127,511,2047,8191,32767};
//    int [] recordCounts = {127,511,2047,8191,32767,131071};
//    int [] recordCounts = {127,511,2047,8191,32767,131071,524287};
    int howManyReps = 4;
    String dataFileName = "";
    RecordArray recs;

    FileUtils.setLogFile("zlogfile");
    FileUtils.setOutFile("System.out");

    FileUtils.outFile.printf("%s start the computation%n",TAG);
    FileUtils.outFile.flush();

    dataFileName = "dataFile";

    //********************************************************************
    // The outermost loop runs on the size of the data file.
    ///
    for(int count : recordCounts)
    {
      FileUtils.logFile.printf("%s count %d%n",TAG,count);
      FileUtils.logFile.flush();

      //********************************************************************
      // The next loop runs some number of repetitions of generating a
      // data file, then reading and sorting that data file using several
      // different sorting algorithms.
      ///
      zork = 37;
      for(int reps = 1; reps <= howManyReps; ++reps)
      {
        FileUtils.logFile.printf("%s repetition %d%n",TAG,reps);
        FileUtils.logFile.flush();

        //********************************************************************
        // First we generate the data file as a file 'dataFile'.
        ///
        createDataFile(dataFileName,count);

        //********************************************************************
        // BUBBLESORT PROCESSING
        ///
        /*********************************************************************
         * Open the file for reading and read the data.
        **/
        recs = readTheRecords(dataFileName,count);

        //********************************************************************
        // Echo the data.
        ///
//        FileUtils.logFile.printf("%s echo the data%n",TAG);
//        FileUtils.logFile.flush();
//        recs.writeRecordArray();
//        FileUtils.logFile.flush();

        //********************************************************************
        // Do the bubblesort.
        ///
        FileUtils.logFile.printf("%s do the bubblesort%n",TAG);
        FileUtils.logFile.flush();
        timeBegin = System.currentTimeMillis();
        recs.bubblesort();
        timeEnd = System.currentTimeMillis();

//        FileUtils.logFile.printf("%s write the bubblesorted data%n",
//                                 TAG);
//        FileUtils.logFile.flush();
//        recs.writeRecordArray();
        FileUtils.logFile.printf("bubble(data,comps,swaps,millis)  %2d %10d ",
                             reps,count);

        FileUtils.logFile.printf("%10d %10d %10d%n",
                             recs.getComparisonsBubble(),
                             recs.getSwapsBubble(),
                             timeEnd - timeBegin);
        FileUtils.logFile.flush();
        recs.checkSort();

        //********************************************************************
        // VARIANT BUBBLESORT PROCESSING
        ///
        //********************************************************************
        // Open the file for reading and read the data.
        ///
        recs = readTheRecords(dataFileName,count);

        //********************************************************************
        // Echo the data.
        ///
//        FileUtils.logFile.printf("%s echo the data%n",TAG);
//        FileUtils.logFile.flush();
//        recs.writeRecordArray();
//        FileUtils.logFile.flush();

        //********************************************************************
        // Do the variant bubblesort.
        ///
        FileUtils.logFile.printf("%s do the var bubblesort%n",TAG);
        FileUtils.logFile.flush();
        timeBegin = System.currentTimeMillis();
        recs.variantbubblesort();
        timeEnd = System.currentTimeMillis();

//        FileUtils.logFile.printf("%s write the var bubblesorted data%n",
//                                 TAG);
//        FileUtils.logFile.flush();
//        recs.writeRecordArray();
        FileUtils.logFile.printf("vbubble(data,comps,swaps,millis) %2d %10d ",
                             reps,count);

        FileUtils.logFile.printf("%10d %10d %10d%n",
                             recs.getComparisonsVariantBubble(),
                             recs.getSwapsVariantBubble(),
                             timeEnd - timeBegin);
        FileUtils.logFile.flush();
        recs.checkSort();

        //********************************************************************
        // INSERTIONSORT PROCESSING
        ///
        //********************************************************************
        // Open the file for reading and read the data.
        ///
        recs = readTheRecords(dataFileName,count);

        //********************************************************************
        // Echo the data.
        ///
//        FileUtils.logFile.printf("%s echo the data%n", TAG);
//        FileUtils.logFile.flush();
//        recs.writeRecordArray();
//        FileUtils.logFile.flush();

        //********************************************************************
        // Do the insertionsort.
        ///
        FileUtils.logFile.printf("%s do the insertionsort%n",
                                 TAG);
        FileUtils.logFile.flush();
        timeBegin = System.currentTimeMillis();
        recs.insertionsort();
        timeEnd = System.currentTimeMillis();

//        FileUtils.logFile.printf("%s write the insertionsorted data%n",
//                                 TAG);
//        FileUtils.logFile.flush();
//        recs.writeRecordArray();
        FileUtils.logFile.printf("insert(data,comps,swaps,millis)  %2d %10d ",
                             reps,count);
        FileUtils.logFile.printf("%10d %10d %10d%n",
                             recs.getComparisonsInsertion(),
                             recs.getSwapsInsertion(),
                             timeEnd - timeBegin);
        FileUtils.logFile.flush();
        recs.checkSort();


        //********************************************************************
        // QUICKSORT PROCESSING
        ///
        //********************************************************************
        // Open the file for reading and read the data.
        ///
        recs = readTheRecords(dataFileName,count);

        //********************************************************************
        // Echo the data.
        ///
//        FileUtils.logFile.printf("%s echo the data%n",TAG);
//        FileUtils.logFile.flush();
//        recs.writeRecordArray();
//        FileUtils.logFile.flush();

        //********************************************************************
        // Do the quicksort.
        ///
        FileUtils.logFile.printf("%s do the quicksort%n", TAG);
        FileUtils.logFile.flush();
        timeBegin = System.currentTimeMillis();
        recs.quicksort();
        timeEnd = System.currentTimeMillis();

//        FileUtils.logFile.printf("%s write the quicksorted data%n",
//                                 TAG);
//        FileUtils.logFile.flush();
//        recs.writeRecordArray();
        FileUtils.logFile.printf("quick(data,comps,swaps,millis)   %2d %10d ",
                             reps,count);
        FileUtils.logFile.printf("%10d %10d %10d%n",
                             recs.getComparisonsQuick(),
                             recs.getSwapsQuick(),
                             timeEnd - timeBegin);
        FileUtils.logFile.flush();
        recs.checkSort();



        //********************************************************************
        // HEAPSORT PROCESSING
        ///
        //********************************************************************
        // Open the file for reading and read the data.
        ///
        recs = readTheRecords(dataFileName,count);

        //********************************************************************
        // Echo the data.
        ///
//        FileUtils.logFile.printf("%s echo the data%n",TAG);
//        FileUtils.logFile.flush();
//        recs.writeRecordArray();
//        FileUtils.logFile.flush();

        //********************************************************************
        // Do the heapsort.
        ///
        FileUtils.logFile.printf("%s do the heapsort%n",TAG);
        FileUtils.logFile.flush();
        timeBegin = System.currentTimeMillis();
        recs.heapsort();
        timeEnd = System.currentTimeMillis();

//        FileUtils.logFile.printf("%s write the heapsorted data%n",
//                                 TAG);
//        FileUtils.logFile.flush();
//        recs.writeRecordArray();
        FileUtils.logFile.printf("heap(data,comps,swaps,millis)    %2d %10d ",
                             reps,count);
        FileUtils.logFile.printf("%10d %10d %10d%n",
                             recs.getComparisonsHeap(),
                             recs.getSwapsHeap(),
                             timeEnd - timeBegin);
        FileUtils.logFile.flush();
        recs.checkSort();

      } // for(int reps = 1; reps <= howManyReps; ++reps)
    
    } // for(int count : recordCounts)

    FileUtils.outFile.printf("%s end the computation%n",TAG);
    FileUtils.outFile.flush();

    FileUtils.closeOutFile();
    FileUtils.closeLogFile();
  } // public static void main (String[] args)

} // public class Main


