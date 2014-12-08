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
allocation. Still, we attempted to compare the speed of both programs, and this
was of course done using wall time. In an attempt to control variables, 
we used the same computer for both exectutions, closed all network connections,
and closed all applications prior to the execution. During the execution we 
supplied no input to the machine of any kind. Both executions were run
sequentially, with a small break for cooldown. 
	      	   <---->conclusions of exectution<--->

