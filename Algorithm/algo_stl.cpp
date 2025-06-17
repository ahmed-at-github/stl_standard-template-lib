#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

/*

// Using generic sort algorithm with the binary predicate greater<int>
#include<bits/stdc++.h>
using namespace std;

int main () {
    int a[1000];
    for(int i =0; i <1000; i++)
        a[i] = i;

// sort into ascending order
    sort(&a[0], &a[1000]);

    random_shuffle(&a[0], &a[1000])

// sort into descending order
    sort(&a[0], &a[1000], greater<int>)

    return 0;

}

// Using reverse algorithm with string and array
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = “lev tolstoy”;
    reverse(str.begin(), str.end());
    assert(str1 == “yotslot vel”)

    int arr[5] = [23, 8, 1, 29, 5];
    reverse(&arr[0], &arr[1]):

    return 0;
}

// Using generc find algorithm with array, vector and list
#include <bits/stdc++.h>
using namespace std;

int main() {

    char s[]  = “C++ is a better C”;
    int len = strlen(s);

    vector<int> vec {1,3,4,6}

    list<int> li {1,3,4,6}

// serach for the first occurrence of the letter ‘e’:
    const char *addr = find(&s[0], &s[len], ‘e’);

// serach for the first occurrence of the number 3:
    vector<int>:: iterator addr = find(vec.begin(), vec.end(), 3);

// serach for the first occurrence of the number 3:
    list<int>:: iterator addr = find(li.begin(), li.end(), 3);
    ++next;

    assert(*addr == ‘e’ && *(where+1) == ‘t’);
    assert(*addr == 3 && *(where+1) == 4);
    assert(*addr == 3 && *next == 4);

    return 0;
}

// Using generic adjacent algorithm
#include<bits/stdc++/h>
using namespace std;

int main() {
    deque<string> player(5);
    deque<string>:: iterator i:

// initializing the deque
    player[0] = “Pele”;
    player[1] = “Maradona”;
    player[2] = “Maradona”;
    player[3] = “Rossi ”;
    player[4] = “Messi”;

// find the first pair of equal consecutive names
    i = adjacent_find(player.begin(), player.end());

// find the first name that is lexicogrpahically
// greater than the following nam e
    i = adjacent_find(player.begin(). player.end()l greater<string>())

    return 0;
}

// Using generic for_each algorithm
#inclde<bits/stdc++.h>
using namespace std:

int main() {
    list<string> dlist;

    dlist.insert<dlist.end(), “clark“>;
    dlist.insert<dlist.end(), “rindt“>;
    dlist.insert<dlist.end(), “senna“>;

// print out each list element
    for_each(dlist,begin(), dlis.rnft)


    return 0;
}
// Using generic equal and mismatch algorithm
#include<bits/stdc++.h>

int main( {

    list<string> driver_list;
    vector<string> vec;
    deque<string> deq;

    driver_list.insert(driver_list.end(), “clark”);
    driver_list.insert(driver_list.end(), “rindt”);
    driver_list.insert(driver_list.end(), “senna”):

    vec.insert(vec.end(), “clark”);
    vec.insert(vec.end(), “rindt”);
    vec.insert(vec.end(), “senna”);
    vec.insert(vec.end(), “berger”):

    deq.insert(deq.end(), “clark):
    deq.insert(deq.end(), “berger”);

// Show that driver_list and the first 3 elements of
// vec are equal in all corresponding position
    equal(driver_list.begin(), driver_list.end(), vec.begin());

// Find the corresponding pos. in deq and driver_list
// at which unequal elements first occur
    pair<deque<strinng>::iterator, list<string>::iterator>
    pair1 = mismatch(deq.begin(), deq.end()), driver_list.begin();

return 0; }

// Using merge algorithm with an array, list, deque
#include <bits/stdc++.h>
using namepcae std;

int main() {

    int arr[4] = [3, 0, 8, 11];
    int len = 4;

    list<int> list {1, 3, 4, 6};

// initialize deque with 10 copies of the number 13
    deque<int> deq(26, 13);

// merge array arr and list li, putting result in dequed deq
    merge(&arr[0], &arr[len], li.begin(), li.end(), deq.begin())

    assert(deq == (0, 1, 3, 3, 4, 5, 8, 13, 13))

    return 0;
}

// Using generic accumulate function
#include <bits/stdc++.h>
using namespace std;

int main () {
    int x[5] = {2, 3, 5, 7, 11};

// initialize vetor1 to x[0] through x[4]
    vector<int> vector1(&x[0], &x[4]);

    int sum = accumulate(vector1.begin(), vector2.begin, 0);

    asset(sum == 20);

    return 0;
}

// Using generic accumulate algorithm to compute a product
#include <bits/stdc++.h>
using namespace std;

int mult(int x, int y) { return x*y; }

int main () {
    int x[5] = {2, 3, 5, 7, 11};
// initialize vector1 to x[0] through x[4]
    vector<int> vector1(&x[0], &x[4]);

    int product = accumulate(vector.begin(), vector.end(), 1,mult)

    assert(product == 2310);
    return 0;
}

// Using generic accumulate algorithm  to compute a product, using a function object
#include <bits/stdc++.h>
using namespace std;

class multiply {
public:
    int operator() (int x, int y) const {return x*y;}
}

int main() {
    int x[5] = {2, 3, 5, 7, 11};

// initialize vector1 to x[0] yhrough x[4]
    vector<int> vector1 (&x[0], &x[4]);

    int product = accumulate(vector1.begin(), vector1.end(), 1, multiply())

    assert (product == 2310);
    return 0;
}

// Using generic algorithm accumulate  to compute a product, using multiplies
#include<std\bitsc++.h>
using namespace std;

int main () {
    int x[5] = {2, 3, 5, 7, 11};

// initialize vector1 to x[0] through x[4]
    vector<int> vector1(&x[0], &x[4]);

    int product = accumulate(vector1.begin() , vector1.end(), 1, multiplies<int> ())

    assert(product == 2310);

    return 0;
}

// Using generic accumulate algorithm with a reverse iterator
#include <bits/stdc++.h>
using namespace std;

int main() {
    float small = (float) 1.0/(1 << 26);
    float x[5] = {1.0, 3*small, 2*small, small, small};

// initialize vector1 t,  x[0] through x[5]
    vector<int> vector1(&x[0], &x[5]);

    vector<float>:: iterator i;
    cout.precision(10);
    for(i = vector1.begin(), i != vector1.end(); i++ )
        cout <<*i <<”\n”;

    float sum = accumulate(vector1.begin(), vector1.end(), (float)0.0);

    float sum1 = accumulate(vector1.rbegin(), vector1.rend(), (float)0.0);

    return 0;
}

// Using generic find algorithm with input-iterator
#include<bits/stc++.h>
using namespace std;

int main() {
// initialize array with 10 integers
    int a[10] = {12, 3, 25, 7, 11, 213, 29, -31};

// Find the first element equal to 7 in the array
    int *ptr = find(&a[0], &a[10], 7);

    assert(*ptr==7 && *(ptr+1)==11);

// initialize list1 with the same integers as in array a
    list<int> list1(&a[0], &a[10]);

// Find the first element equal to 7 in list1:
    list<int>:: iterator i = find(list1.begin(), list1.end(), 7);

    assert(+i==7 && *(i+1)==11);

    return 0;
}
// Using generic search algorithm
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vector1(20);
    deque<int> deque1(6);

// initializing vector1 with 0, 1, ..19
    int i;
    for(i = 0; i < 20; i++ )
        vector[i] = i;

// initializing deque1 with 5, 6, ..9
    for(i = 0; i < 5; i++)
        deque1[i] = i+5;

// Search for first occurrence of deque1’s contents
// as a subsequence of the vector contents
    vector<int>:: iterator k = search(vector1.begin(), vector1.end(), deque1.begin(), deque1.end())

// Verify that 5, 6, 7, 8, 9 occur in vector1
// starting at the position to which k refers
    for(i=0; i <5; i++)
        assert(*(k+1) == i+5)

    retiurn 0;

}

// Using generic copy and copy_backward algorithm
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s(“abcdefghijklmnopqrstuwxyz”);
    vector <char> vector1 (s.begin(), s.end());

    vector<char> vector2 (vector1.size());

// Copy vector1 to vector2
    copy(vector1.begin(), vector1.end(), vector2.begin());
    assert(vector1 == vector2)

// Shift the contents of vector1 left by 4 positions
    copy(vector1.begin()+4, vector1.end(), vector1.begin())
    assert(string(vector1.begin(), vector1.end()) == string(“efghijklmnopqrstuvwxyzwxyz”))

// Shift it right by 2 positions
    copy_backward(vector1.begin(), vector1.end()-2,
               vector1.end())

    assert(string(vector1.begin(), vector1.end()) == string(“efefghihklmnopqrstuvwxyzwx”))

    return 0;
}
// Using fill and fill_n algorithm
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s(“Hello there”);
    vector<char> vector1(s.begin(),s.end());

// Fill first 5 positions of vector1 with X’s
    fill(vector1.begin(), vector1.begin()+5, ‘X’ );
    assert(string(vector1.begin(), vector1.end()) == string(“XXXXX there”))

// Fill 3 more position’s with Y’s
    fill_n(vector1.begin()+5, 3, ‘Y’)
    assert(string(vector1.begin(), vector1.end()) == string(“XXXXXYYYere”))

    return 0;
}
// Using generic generate algorithm
#include<bits/stdc++.h>
using namespace std;

template <typename T>
class calc_square {
    T i;
    public:
        calc_square(): i(0) {}
        T operator()() {++i; return i*i;}
}

int main() {
    vector<int> vector1(10);

// Fill vector1 with 1, 4, 9, 16 ….100
    generate(vector1.begin(), vector1.end(), calc_square<int>());

    for(int j = 0; j <10; j++)
        assert(vector[j] == (j+1)*(j+1))

    return 0;
}
// Using the generic partition and stable_partition algorithms
#include<bits/stdc++.h>
using namespace std;

bool above_40 (int n) {return (n>40);}

int main() {
    const int N = 7;
    int array0[N] = {50, 30, 10, 70, 60, 40, 20};
    int array1[N];
    copy(&array0[0], &array0[N], &array1[0]);

// Partition array1, putting numbers greater than 40 first
// followed by those less than or equal to 40
    int *split = partition(&array1[0], &array1[N], above_40);

// Result of (unstable) partitioning 50 60 70 | 10 30 40 20

// Restore array1 to array0 contents
    copy(&array0[0], &array0[N], &array1[0]);

// Again partition array1, putting numbers greater than 40 first
// followed by those less than or equal to 40, preserving relative order in each group
    split = stable_partition(&array1[0], &array1[N], ab0ve_40);

//Result of stable partitioning: 50 70 60 | 30 10 40 20
}
// Using the generic remove algorithm
#include<bits/stdc++.h>
using namespace std;

int main() {
    const int N = 11;
    int array1[N] = {1, 2, 0, 3, 4, 0, 5, 6, 7, 0, 8};
    vector<int> vector1;

    int i;
    for(i = 0; i < N; i++)
        vector1.push_back(array1[i]);

// Remove the zeroes from vector1
    vector<int>:: iterator new end;
    new_end = remove(vector1.begin(), vector1.end(), 0);

// The size of vector1 remain the same
    assert(vector1.size() == N);

// The nonzero elements are left in [vector1.begin(), new_end)
// Erase the rest [new_end, vector1.end() )
    vector1.erase(new_end, vector1.end());

    return 0;
}
// Using generic replace algorithm
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s(“FRERRARi”);
    vector<char> vector1(s.begin()m s.end());

// Replace all occurrences of R by S
    replace(vector1.begin(), vector1.end(), ‘R’, ‘S’);

    assert(atring(vector1.begin(), vector1.end()) == string(“FESSAST”))

    return 0;
}
// Using generic swap algorithm
#include<bits/stdc++.h>
using namespace std;

int main() {
    int high = 250, low = 0;
    swap(high, low);
    assert(high ==0 && low == 250);

    vector<int> vector1(100, 1), vector2(200, 2);
    swap(vector1, vector2)
    assert(vcetor1 == vector<int>(200, 2) && vector2 == vector<int>(100, 1));

    return 0;
}
// Using generic swap_ranges algorithm
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<char> vector1 = make< vector<char> > (“HELLO”),
            vector2 = make< vector<char >> (“THERE”);

// Save vector1 and vector2 contents, for checking:
    vector<char> temp1 = vector1, temp2 = vectpr2;

// Swap the contents of vector1 and vector2
    swap_ranges(vector1.begin(), vector1.end(), vector2.begin());

    assert(vector1 == temp2 && vector2 == temp1)

    return 0;
}
// Using generic transform algorithm
#include<bits>/stdc++.h>
using namespace std;

int sum (int v1, int v2) {return v1+v2;}
int main() {
    int array1[5] = {0, 1, 2, 3, 4};
    int array2[4] = {6, 7, 8, 9, 10};

    // Put sums of corresponding array1 and array2 elements
    transform(&array1[0], &array1[5], &array2[0], sum)
    //6 9 10 12 14

    return 0;
}
// Using generic unique algorithm
#include<bits/stdc++.h>
using namespace std;

int main() {
    const int N = 11;
    int array1[N] = {1, 2, 0, 3, 3, 0, 7, 7, 7 0, 8}
    vector<int> vector1;
    for(int i = 0; i < N; i++)
        vector1.push_back(array1[i]);

// Eliminate consecutive duplicates from vector1
    vector<int>:: iterator new_end;
    new_end = unique(vector1.begin(), vector1.end());

// The size of vector1 remains the same
    assert(vector1.size() ==N);

// The non-consecutive duplictae elements are left in [vector1.begin(), new_end)
// Erase the rest [new_end, vector1.end() )
    vector1.erase(new_end, vector1.end());

//Result: 1 2 0 3 0 7 0 8

    return 0;

}
// Using generic sort, stable_sort and partial_sort
    /*Do from geekforgeeks*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int N = 20;
    vector<int> vec0;
    for (int i = 0; i < N; i++)
        vec).push_back(i);

    vector<int> vec1 = vec0;
    // BEFORE SORTiNG:
    // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19

    //

    return 0;
}
// Using generic nth_element algorithm
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {25, 7, 9, 2, 0, 5, 21};
    const int N = 4;

    // Using the nth_element to place the Nth smallest element
    // in v to the Nth position, i.e., v.begin() +N
    nth_element(v.begin(), v.begin() + N, v.end());

    // Checking that the element at v.begin()+N to v[N], is
    // greater than or equal to each of the preceding elements
    int i;
    for (int i = 0; i < N; i++)
        assert(v[N] >= v[i])

            // Checking that v[N] is less than or equal to each of the
            // succeding elements
            for (int i = N; i < 7; i++)
                assert(v[N] <= v[i])

                    return 0;
}
// Using generic binary search, upper_bound, lower_bound and equal_range  algorithm
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v(5);
    bool found;

    // Initializing
    int i : for (i = 0; i < 5; i++) v[i] = i;

    // Search for each of the integers
    for (i = 0; i < 5; i++)
    {
        found = binary_search(v.begin(), v.end(), i);
        assert(found == true);
    }

    // Try searching for a value that’s not present
    found = binary_search(v.begin(), v.end(), 9);
    assert(found == false);

    // Vector v now contains 0 7 7 7 8
    // Applying upper_bound, lower_bound, equal_range
    vector<int>::iterator k;
    k = lower_bound(v.begin(), v.end(), 7);
    assert(k == v.begin() + 1 && *k == 7)

        k = upper_bound(v.begin(), v.end(), 7);
    assert(k == v.end() - 1 && *k == 8);

    pair<vector<int>::iterator, vector<int>::iterator> pi = equal_range(v.begin(), v.end(), 7);
    assert(pi.first == v.begin() + 1);
    assert(pi.second == v.end() - 1);

    return 0;
}
// Using generic merge and inplace_merge algorithm pp150
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vector1(5);
    vector<int> vector2(5);
    vector<int> vector3(10);

    int I;
    for (i = 0; I < 5; i++)
        vector1[i] = 2 * i;

    for (i = 0; I < 5; i++)
        vector2[i] = 1 + 2 * i;

    // Merge contents of vector1 and vector2,
    // putting result in vector3
    merge(vector1.begin(), vector1.end(),
          vector2.begin(), vector2.end() vector3.end())

        for (i = 0; I < 10; i++)
            assert(vector3[i] == i);

    // Reassigning vectors
    for (i = 0; I < 5; i++)
        vector3[i] = vector1[i];
    for (i = 0; I < 5; i++)
        vector3[i + 5] = vector2[i];

    // Merge the two sorted halves of vector3
    // in place to obtain a sorted vector3:
    inplace_merge(vector3.begin(), vector3.begin() + 5,
                  vector.end())

        for (i = 0; I < 10; i++)
            assert(vector3[i] == i);

    return 0;
}
// Using generic set operations algorithm
#include <bits/stdc++.h>
using namespace std;

// <Define make function (builds a container of characters?)>

int main()
{
    bool result;
    vector<char> vector1 = make<vector<char>>(“abcde”),
                 vector2 = make<vector<char>>(“aeiou”);

    // Illustrate includes:
    result = includes(vector1.begin(), vector1.end(),
                      vector2.begin(), vector2, end());
    assert(result == false)

        result = includes(vector1.begin(), vector1.end(),
                          vector2.begin(), vector2.begin() + 2);
    assert(result == true); // ‘a’ and ‘e’ are contained in vctor1

    // Illustrate set union
    vector<char> setUnion;
    set_union(vector1.begin(), vector1.end(),
              vector2.begin(), vector2.end(),
              back_inserter(setUnion));

    assert(setUnion == make<vector<char>>(“abcdeiou”));

    // Illustrate set_intersection
    vector<char> setIntersection;
    set_union(vector1.begin(), vector1.end(),
              vector2.begin(), vector2.end(),
              back_inserter(setIntersection));

    assert(setIntersection == make<vector<char>>(“ae”));

    // Illustrate set_symmetric_difference
    vector<char> setDifference;
    set_symmetrc_difference(vector1.begin(), vector1.end(),
                            vector2.begin(), vector2.end(),
                            back_inserter(setDifference));

    assert(setDIfference == make<vector<char>>(“bcdiou”));

    return 0;
}

// Using generic heap operations algorithm pp152
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialize a vector of integers
    vector<int> vector1(5);
    int I;
    for (i = 0; I < 5; i++)
        vector1[i] = I;

    ranndom_shuffle(vector1.begin(), vector1.end());

    // Sort vector1 using push_heap and pop_heap
    for (i = 2; I < 5; i++)
        push_heap(vector1.begin(), vector1.end() + i);

    for (i = 5; I >= 2; i--)
        pop_heap(vector1.begin(), vector1.end() + i);

    // Verify that array is sorted:
    for (i = 0; I < 5; i++)
        assert(vector1[i] == I);

    // Shuffle the elements again
    ranndom_shuffle(vector1.begin(), vector1.end());

    // Sort vector1 using make_heap and sort_heap
    make_heap(vector1.begin(), vector1.end());
    sort_heap(vector1.begin(), vector1.end());

    // Verify that the array is sorted:
    for (i = 0; I < 5; i++)
        assert(vector1[i] == I);

    return 0;
}

//

*/