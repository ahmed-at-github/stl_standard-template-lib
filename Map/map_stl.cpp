#include <bits/stdc++.h>
using namespace std;

int main()
{
    // map automatically sorts the keys in ascending order.
    // Declaring map syntax map<key_type, value_type> mp;

    // Empty map
    map<int, string> mp1;

    // initializing map with list
    map<int, string> mp2{
        {1, "Hello"}, {2, "World"}, {3, "!"}};

    // Adding key-value pairs using [] or map::insert()
    mp1[1] = "Iam";
    mp1[2] = "a";
    mp1.insert({3, "Human"});

    // copy constructor method
    map<int, string> mp3(mp1);

    // Basic operations
    // Insertion insert(), emplace()
    mp3.insert({5, "and therefore I think nothing human is alien to me"});

    mp3.emplace(6, "Roman poet Terence"); // in insert() and emplace() there is syntactical difference. while both inserts the key and its element in the map container. If the same key is emplaced/inserted more than once, the map stores the first element only as the map is a container which does not store multiple keys of the same value.

    // Accessing elements
    //[] or at()
    cout << mp2[1] << " " << mp2.at(2) << "\n";

    // Updating elements
    map<int, string> mp4 = {{1, "Not"}, {2, "today"}, {0, "sorry"}};

    mp4[1] = "yes";
    mp4.at(1) = "later";

    // Finding elements
    auto it = mp3.find(2); // returns iterator
    cout << it->second << "\n";

    // Deleting erase()
    mp4.erase(2);           // bu key
    mp4.erase(mp4.begin()); // by iterator

    // Other operations
    // size(), empty()
    cout << mp4.size() <<endl;

    if (mp4.empty())
        cout << "yes, empty\n";
    else
        cout << "nope\n";

    for (auto &p : mp4)
        cout
            << p.first << " " << p.second
            << "\n";

    return 0;
}