#include <bits/stdc++.h>
using namespace std;

void print_set(set<int> &st)
{
    for (auto i : st)
        cout << i << " ";
}

int main()
{

    // Creating a set
    set<int> st1;                /* empty set*/
    set<int> st2 = {3, 5, 2, 1}; /* with initializer list*/
    set<int> st3(st2);           // from another set

    // Insertion insert() / emplace()
    // N.B. If the element already exists in the set, it will not be added again.
    st1.insert(3);
    st2.insert(4);
    st2.emplace(7);

    // Accessing & Finding  [begin(), next(), find()]
    // N.B. In set, we have to increment or decrement iterator obtained from begin() or end() methods respectively to access the element by position.

    auto it = st2.begin();  // returns iterator to 1st element
    auto it1 = next(it, 2); // accessing 3rd element
    // next() function returns the set::begin() iterator incremented by i times. We have dereferenced this iterator to access the value. The next() function does not modify the given iterator. It returns the incremented copy of the iterator.

    auto it2 = st2.find(2); // returns iterator to element "3"

    if (it2 != st2.end()) /* find() searches for a given element and returns an iterator to the element if it is found. If it is not found, set::end() is returned. */
        cout << "Element found";
    else
        cout << "Element not found";

    // UPDATING - In set, we have to increment or decrement iterator obtained from begin() or end() methods respectively to access the element by position.

    // Deleting erase()
    st2.erase(2);
    st2.erase(st2.begin());

    // Other operations
    // empty()
    cout << st1.empty() << endl; // returns boolean T or F

    // size()
    cout << st2.size() << endl;


    print_set(st3);

    return 0;
}