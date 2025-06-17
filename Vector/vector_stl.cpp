#include <bits/stdc++.h>
#include <vector>
using namespace std;

void print_vector(vector<int> &v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

void print_vectorc(vector<char> &v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    // Creating OR initializing a Vector
    vector<int> v1; // Empty vector

    // initializing a vector with 5 elements [Initializer list]
    vector<int> v2 = {1, 2, 3, 4, 5};

    // initializing a vector with 5 elements and default value as 9 [single value]
    vector<int> v3(5, 9);

    // initializing by Array
    int arr[] = {12, 24, 48, 96};
    int n = sizeof(arr) / sizeo    for (int i = 0; i < v1.size(); i++)
    {
        for (int j = 0; j < v1[i].size(); j++)
            cout << v1[i][j] << " ";
        cout << endl;f(arr[0]);
    vector<int> v4(arr, arr + n); // The constructor vector<T>(start, end) copies the range [start, end) into the vector.

    // Initializing from another vector or any STL container
    vector<int> v5(v2.begin(), v2.end());

    // Insert Elements
    vector<char> v6 = {'a', 'm', 'e'};

    v6.push_back('d');              // inserting at end
    v6.insert(v6.begin() + 1, 'h'); // inserting 'h' at index-1 v.insert(pos, value)

    // Access or Update Elements

    // Accessing and printing values
    cout << v2[3] << endl;
    cout << v2.at(2) << endl;

    // Updating values using indexes 3 and 2
    v2[3] = 32;
    v2.at(2) = 56;

    // Vector Size
    cout << v2.size();

    // Delete
    vector<char> v7 = {'a', 'c', 'f', 'd', 'z'};

    v7.pop_back();                             // Deleting last element 'z'
    v7.erase(find(v7.begin(), v7.end(), 'f')); // Deleting element 'f'
 
    /* find(v.begin(), v.end(), 'f'): Searches for the first occurrence of 'f' in the vector v. Returns an iterator to that position.

    v.erase(iterator): Erases the element at the position pointed to by that iterator.
    */

    // Other vector member functions

    // empty()
    if (v7.empty())
        cout << "Empty";
    else
        cout << "Not Empty";


    // reverse(), reverse_copy()
    reverse(v2.begin(), v2.end());

    vector<int> temp(v2.size());
    reverse_copy(v2.begin(), v2.end(), temp.begin());   // Reverse copying the vector into temp vector

    // copy()
    vector<int> v8(v2.size());
    copy(v2.begin(), v2.end(), v2.begin()); 


    print_vector(v4);
    print_vectorc(v6);



    return 0;
}