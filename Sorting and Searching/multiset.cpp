#include<bits/stdc++.h>
using namespace std;
int main() {
    multiset<int> ms;
    /////////////
    // insertion
    /////////////
    ms.insert(3);ms.insert(8);ms.insert(5);ms.insert(7);ms.insert(9);ms.insert(5);

    ////////////
    // iteration
    ////////////
    for (auto x : ms) {
        cout << x << " ";
    }
    cout << endl;
 
    /////////////
    //Count
    /////////////
    cout << "count of 5 is :" << ms.count(5) << endl;

    /////////////
    // find index
    /////////////
    auto it = ms.find(5); // points to first 5
    cout << "first index of 5 is :" << distance(ms.begin(), it) << endl;


    //////////////////////////
    //   upper and lower bound
    //////////////////////////
    auto ub = ms.upper_bound(5); // first element > 5
    cout << "upper bound of 5 is at index :" << distance(ms.begin(), ub) << endl;
    auto lb = ms.lower_bound(5); // first element >= 5
    cout << "lower bound of 5 is at index :" << distance(ms.begin(), lb) << endl;

    /////////////////
    // remove element
    /////////////////
    ms.erase(7);
    while (true) {
        auto it_eraser = ms.find(5);
        if (it_eraser != ms.end())
            ms.erase(it_eraser);
        else
            break;
    }

    // iteration
    for (auto x : ms) {
        cout << x << " ";
    }
    cout << endl;


}