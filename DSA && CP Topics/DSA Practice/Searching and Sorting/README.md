> # **```Binary Search```**

## Rotated sorted array 
Suppose we're given an array, arr = [1, 2, 3, 4, 5]  
Now we've to rotate the array. Rotating an array is simply placing an element from front to last of the array or vice versa. 

| Rotation count | Element arrangement |
| -------------- | ------------------- |
| 0              | 1 2 3 4 5           |
| 1              | 2 3 4 5 1           |
| 2              | 3 4 5 1 2           |
| 3              | 4 5 1 2 3           |
| 4              | 5 1 2 3 4           |
| 5              | 1 2 3 4 5           |

A pattern is appeared hereby, after rotating an array of it's size time, it will arrange as same. 

**Observation**: Index of the minimum element (for ascending order sorted array) or maximum element (for descending order sorted array) in the sorted rotated array is the number of time a sorted array is rotated.

### What is the pivot or peak element? 

Sorting algorithms: 
https://www.quora.com/What-are-the-most-common-sort-algorithms-in-a-tech-interview

DNF sorting: DNF stands for **Dutch National Flag** algroithm which is a effective algorithm to sort if you've only three types of element for any number of occurrences. 

Time complexity: O(n)


