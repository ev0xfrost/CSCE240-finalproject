<--Documentation for 'SortRoutines'-->
Author: John C. Quinn, Nicholas A Wrobel
Date: December 6, 2014

The SortRoutines program tests four types of Sorting Algorithms,
judging them based on execution/wall clock time and number of comparisons. The
algorithms analysed are Quicksort, Bubblesort, Heapsort, and InsertionSort.
The Bubblesort algorithm was also tested with a variant implementation, which
is commonly known as 'improved bubblesort'.
The program is written in both java and C++, and highlights many of the
differences between the two languages, and some of the advantages of using C++
over java in particular. 
   One of the biggest limitations of java is the inability to obtain executable
time. In situations where time analysis is important, the inability to retrieve
time relative to the program can result in serious inaccuracies. This is due 
to the fact that wall clock time assumes does not take into account the varying
amount of resources an operating system may assign to a program. There is no 
reliable way to account for this potential discrepancy. 
   On the other hand, C++ allows for a time relative to the execution, which 
ensures that the time will not be affected by the operating system's resource
allocation. It would be possible to compare the execution speeds, with relative
accuracy, between Java and C++, using wall time, but since the current version
of C++ can only recieve wall time accurate to the second, we decided against 
using a side-by side wall time comparison, due to the extreme loss in accuracy.
It is expected that C++ would execute more quickly than java, especially since
both languages used the same exact implementations of the various sorting 
algorithms. The analysis of the sorting algorithms are as follows:
     BubbleSort is the simplest sorting algorithm of those tested, it
traditionally requires n^2 swaps, but in this implementation can exit early.
BubbleSort uses two loops. The first loop "grabs" the first element at the
bottom of the array. It then checks if its bigger than the second element, and 
if it is, swaps them. It then checks if the second element is bigger than the
third, and if so, swaps. It continues this process checking if each element 
should be swapped with the one higher than it on the array. The largest value 
in the array will be placed at the top, because it is larger than every other 
value, and therefore will continue to be swapped higher and higher. Once one 
iteration of the inner loops is completed, the max value of the array will be
at the end of the array, and therefore does not need to be considered in the 
swapping. So, the number of iterations of the inner loop decreases by one, for 
every iteration of the outer loop, starting at n iterations, where n is the 
number of elements in the array. In this implementation, it is recognized that
if one of the outer loop iterations results in no swaps, the array must be 
already sorted, and therefore in this case, BubbleSort exits early. 
    In our data, Bubblesort, for the first array, does 8000 comparisons. For the
second array Bubblesort we increase the data size, from 127 to 511, which is 
roughly a factor of 4. We should, therefore, expect the Bubblesort comparison
count, since it increases by a factor of n^2, to increase by roughly 16 between
the first and second arrays. The second comparison count is 130299, which is 
slightly greater than the factor of 16 comparisons that were expected, which 
supports the average of n^2.
    The only difference between the BubbleSort implementations is the
programming behind them. This implementation uses a while loop, and a flag 
'didSwap' for the outer loop, instead of the for loop in the previous
implementation. The flag is set to false at the beginning of each execution, 
and is set to true if the inner loop swaps at least once. If the inner loop
never swaps, then the array must already be sorted, so the execution ends. 
Practically speaking, this implementation continues to sort until the array is
sorted, while the first implementation performs the sort, and stops if it 
happens to be sorted early. Its arguable that the second implementation is
more preferably because it avoids using a break function, but it is dependant 
on one's 'religion'.
   The second algorithm tested is Heapsort. Heapsort is a much more complex 
sorting algorithm using a structure called a maxheap. A maxheap is defined as a
set of data where n > 2n and n > 2(n+1) for all valid n. This structure, when 
visualized, resembles a binary search tree, with the largest value at the top, 
and each child smaller than its respective parent.
    The first part of the Heapsort creates the maxheap. In this program, it uses
a method that completes this task with n lg n comparisons, which is not as 
efficient as the best method, which is only n. The second part of heapsort then
sorts the heap, resulting in the fully sorted RecordArray. This sorting process
costs N lg N.
      For making the heap, the function used is fixHeapUp(insertSub) inside a 
for loop which runs n times. This fixHeapUp function uses the relationship for
the definition of a maxheap, and notes the relationship between the given entry
and its parent as parentSub = insertSub/2. This function has a while loop with
two possible end scenarios: one scenario is when the insertSub is at position 0
and no longer has a parent, and the other scenario is when the parentSub is 
larger than the insertSub. If the child is larger than the parent then the two
are swapped. The function then moves up the array, and grabs the next parent
and performs the same comparison. FixHeapUp takes advantage of the fact that
when a double is set to an integer value, the decimal is truncated, preserving
the proper relationship for a maxHeap. On average, fixHeapUp makes lg N 
comparisons, and is executed N times. Which accounts for the N lg N speed to 
make the heap. 
     One property of a maxheap, is that at the highest value of the heap is
always stored in the first position. In order to sort the heap, the function
takes that top position, and then sets it to the first spot in the array.
The function then fixes the heap using fixHeapDown, which properly reorganizes
the heap with a new value at the top position. The function then sets that new
value to the second position in the array, and then calls fixHeapDown to fix
the array once again. It repeats the process of grabbing the highest heap 
value and then fixing the heap, until the entire array is sorted. The process
of fixing the heap takes lg N, and fixHeapDown runs N times, so the average
speed of this portion is also N lg N.
      Overall, the speed of this particular implementation of Heapsort is 
2 N lg N. Heapsort is one of the fastest algorithms, and is theoretically
faster than QuickSort even, when using large sums of data. The problem with
Heapsort is that in practice it tends to execute badly on modern computers,
which is shown in our data. When executed over 131071 records, quicksort takes
.04 ms, while heapsort takes .10, consistently. Due to the resources heap
demands, such as more cache (which modern computers have little of), quicksort
is more suitable and is generally faster.
	The insertionsort algorithm is an O(N^2) sort routine, so it is on the same
playing field as bubblesort. It involves going through the entire list of data
and moving, or inserting, data elements correctly into a part of the list that 
is already sorted. To get started, this algorithm simply chooses the first 
element as the element that is already sorted, progressing towards the right
of the list, moving elements around until it reaches the end. This element is 
good for its simplicity. 
  Our data indicate that this is in fact an N^2 sorting. In sorting 127 records,
we make 3970 comparisons, and in sorting 511 records we make 65482 comps., 
which is a factor of 16 comparisons for a factor of 4 increase of records.
However, this sort seems to do much better than bubblesort still, with 
approximately half as many comparisons done across the board for each record
count (bubble was 8000 with 127 records, etc.). This is because bubblesort does
N comparisons at every pass through the data, while insertionsort only needs
to do a comparison on the unsorted part of the data - and that unsorted part
grows larger and larger as the sort progresses. It is small in the beginning,
large in the end, so on average, it makes comparisons about half the time.
	Finally, The quicksort algorithm is generally the best sorting routine in 
terms of speed. Although in worst case it performs as O(N^2), it generally performs 
as N*log(N). In the quicksort, a 'pivot' is chosen by some method up to the 
programmer. The numbers in the data are then examined and partitioned, or 
split into two parts: those larger than the pivot and those smaller. This is 
done for each part of the data recursively, so that it divides and conquers, 
essentially splitting the data to be sorted in half each time, hence the 
complexity is log N. Amusingly, quicksort performs worst when trying to sort
data that is already in order: it performs in N^2, as bad as bubblesort. The 
variation in complexity has largely to do with the choice of pivot value. If we 
chose the pivot from the middle, then for data that looks like it is somewhat sorted 
(i.e. not random),the complexity grows towards N^2. However, for a well spread data 
in which we can divide the data evenly by using the middle pivot, we reap the full 
advantages. In our implementation, the pivot is chosen from the end always, which
is good only for simplicity. If the end happens to be much larger or smaller 
than the rest of the data, the quicksort will do poorly. A better solution would
be to choose the pivot randomly, so that over time, we get a 'normalized' 
selection of pivots that gets us closer to the NlogN performance.
  From the results of our tests using quicksort, namely the time taken, we see
that the efficiency of the algorithm largely depends on the pivot. If we hit a
'good' pivot, as we discussed earlier, then the sort will complete in much less
time. Our times start close to zero milliseconds as we process relatively 
smaller numbers of records, but as we get up to 131071 records, we see the 
times: .04, .04, .04 . We jump to 524287 records, the time first goes up to
.16, then back down to 0, then to .04. At this point, we most likely got a pivot
which was very advantageous compared to the others. 
