#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {5, 3, 2, 1, 4};
    int arr[5] = {4, 2, 6, 62, 8};
    int n = sizeof(arr) / sizeof(arr[1]);

    // sort into ascending order (default)
    sort(v.begin(), v.end());
    sort(arr, arr + n);

    // sort into descending order
    sort(arr, arr+n, greater<int>()); 

    for (int i : v)
        cout
            << i << " ";

    cout << endl;

    for (int i : arr)
        cout << i << " ";


   

    return 0;
}