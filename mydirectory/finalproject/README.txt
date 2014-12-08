<--Documentation for 'SortRoutines'-->
Author: John C. Quinn, Nicholas A Wrobel
Date: December 6, 2014

The SortRoutines program tests four types of Sorting Algorithms,
judging them based on execution/wall clock time and number of comparisons. The
algorithms analyzed are Quicksort, Bubblesort, Heapsort, and InsertionSort.
The Bubblesort algorithm was also tested with a variant implementation, which
is commonly known as 'improved bubblesort'.
The program is written in both java and C++, and highlights many of the
differences between the two languages, and some of the advantages of using C++
over java in particular. 
   One of the biggest limitations of java is the inability to obtain executable
time. In situations where time analysis is important, the inabilty to retrive
time relative to the program can result in serious inaccuracies. This is due 
to the fact that wall clock time assumes does not take into account the varying
amount of resources an operating system may assign to a program. There is no 
reliable way to account for this potential disreperancy. 
   On the other hand, C++ allows for a time relative to the execution, which 
ensures that the time will not be affected by the opertaing system's resource
allocation. It would be possible to compare the execution speeds, with relative
accuracy, between Java and C++, using wall time, but since the current version
of C++ can only recieve wall time accurate to the second, we decided against 
using a side-by side wall time comparison, due to the extreme loss in accuracy.
It is expected that C++ would execute more quickly than java, espescially since
both languages used the same exact implementations of the various sorting 
algorithms. The analysis of the sorting algorithms are as follows:
     
