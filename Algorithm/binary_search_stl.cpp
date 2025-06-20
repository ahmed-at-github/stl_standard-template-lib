// Using generic binary search, upper_bound, lower_bound and equal_range  algorithm
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {34, 22, 45, 6, 13};
    int k = 22;

    // binary_search
    sort(v.begin(), v.end());                          // binary_search can only be implemented on sorted data.
    bool found = binary_search(v.begin(), v.end(), k); // returns true or false

    if (found)
        cout << k << " is Present\n";
    else
        cout << k << " is NOT Present\n";

    // Applying upper_bound, lower_bound, equal_range
    vector<int> arr1 = {10, 15, 20, 25, 30, 35};
    vector<int> arr2 = {10, 15, 20, 20, 25, 30, 35};
    vector<int> arr3 = {10, 15, 19, 30, 35};

    int val = 20;

    // using lower_bound() to check if val exists
    auto it1 = lower_bound(arr1.begin(), arr1.end(), val); // returns an iterator
    auto it2 = lower_bound(arr2.begin(), arr2.end(), val); // returns an iterator
    auto it3 = lower_bound(arr3.begin(), arr3.end(), val); // returns an iterator

    auto it4 = upper_bound(arr3.begin(), arr3.end(), val); // returns an iterator

    cout << it1 - arr1.begin() << endl; // returns first occurence of 20 (>=)
    cout << it2 - arr2.begin() << endl; // returns first occurence of 20 (>=)
    cout << it3 - arr3.begin() << endl; // returns first occurence of 20 (>=)

    cout << it3 - arr3.begin() << endl; // returns first occurence of 20 (>)


    return 0;
}