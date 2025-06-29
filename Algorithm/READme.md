# STL Algorithm

### sort() - vector, array
syntax: sort(first, last, comp)

comp = greater<int>() (descending)

first: Iterator to the beginning of the range to be sorted.
last: Iterator to the element just after the end of the range.
comp (optional): Binary function, functor, or lambda expression that compares two elements in the range. By default, it is set as < operator so the sort() function sorts the data in ascending order.

Rules of Defining Comparator

To provide compatibility, a custom comparator function must follow these rules:

1. It should take two arguments of the same type as the elements being sorted.
2. It should return true if the first argument should come before the second; otherwise, it should return false.

### binary_search() Syntax

    std::binary_search(first, last, k, comp);

first: Iterator to the first element of the range.
last: Iterator to the theoretical element just after the last element of range.
k: The value to be search.
comp: Custom comparator. By default, it returns true if k is equal to the current element in the range.

Note: Behaviour of binary_search() is undefined if the given range is not sorted as binary search algorithm can only be implemented on sorted data.

### lower_bound()
The std::lower_bound is used to find first element in the given range that is greater than or equal (>=) to the given value.

Syntax
lower_bound(start, end, val);

The behavior of the lower_bound() is undefined if the array is not sorted 

### upper_bound()
The std::upper_bound is used to find first element in the given range that is greater (>) than the given value.

Syntax
upper_bound(start, end, val);

The behavior of the upper_bound() is undefined if the array is not sorted 