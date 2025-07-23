#include <bits/stdc++.h>
using namespace std;

// Custom comparator for sorting pairs by second element, then by first element
bool customPairComparator(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.second == b.second)
        return a.first < b.first; // If second elements are equal, sort by first
    return a.second < b.second;   // Otherwise, sort by second
}

int main() {
    vector<pair<int, int>> v = {{3, 4}, {2, 5}, {1, 4}, {5, 2}, {4, 5}};

    cout << "Before sorting:\n";
    for (const auto& p : v)
        cout << "(" << p.first << ", " << p.second << ") ";
    cout << "\n";

    // Sort using custom comparator
    sort(v.begin(), v.end(), customPairComparator);

    cout << "After sorting:\n";
    for (const auto& p : v)
        cout << "(" << p.first << ", " << p.second << ") ";
    cout << "\n";

    return 0;
}