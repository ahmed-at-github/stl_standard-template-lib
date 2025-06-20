# STL Algorithm

sort() - vector, array 
syntax: sort(first, last, comp) 

comp = greater<int>() (descending)

first: Iterator to the beginning of the range to be sorted.
last: Iterator to the element just after the end of the range.
comp (optional): Binary function, functor, or lambda expression that compares two elements in the range. By default, it is set as < operator so the sort() function sorts the data in ascending order.

Rules of Defining Comparator

To provide compatibility, a custom comparator function must follow these rules:

1. It should take two arguments of the same type as the elements being sorted.
2. It should return true if the first argument should come before the second; otherwise, it should return false.