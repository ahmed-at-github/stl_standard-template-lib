#include <bits/stdc++.h>
using namespace std;

void print_2d(vector<vector<int>> &v)
{
    for (auto i : v)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{

    // 2D vector
    // empty
    vector<vector<int>> v;

    // default col, row
    int n = 3, m = 3;
    vector<vector<int>> v2(n, vector<int>(m, 0));

    // initializer list
    vector<vector<int>> v1 = {{1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9},
                              {7, 8, 9}};

    // Insert in 2d

    v2.push_back({2, 1, 2});            // whole vectors
    v2[0].insert(v2[0].begin() + 2, 6); // at specific row&col --shifting others to right

    v2[0][2] = 7;

    // Column and Row Size of a 2D Vector (if its regular)
    cout << "row size: " << v1.size() << " col size: " << v1[0].size() << endl;

    print_2d(v2);

    return 0;
}
