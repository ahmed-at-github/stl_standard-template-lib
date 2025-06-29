## Set 

sets are associative container which stores unique elements in some sorted order. By default, it is sorted ascending order of the keys, but this can be changed as per requirement.

Syntax

    set<T, comp> s;

where,
    T: Data type of elements in the set.
    s: Name assigned to the set.
    comp: It is a binary predicate function that tells set how to compare two elements. It is used to sort set in custom order. It is optional and if not provided, set is sorted in increasing order.