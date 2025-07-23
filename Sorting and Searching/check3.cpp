#include <bits/stdc++.h>
using namespace std;

void a(int b, vector<string>& c) {
    unordered_map<string, set<int>> d;
    set<string> e;

    for (int f = 0; f < b; f++) {
        const string& g = c[f];
        set<string> h;
        for (int i = 3; i <= g.size(); i++) {
            for (int j = 0; j + i <= g.size(); j++) {
                h.insert(g.substr(j, i));
            }
        }
        for (const string& k : h)
            d[k].insert(f);
    }

    for (auto& l : d) {
        if (l.second.size() > 1)
            e.insert(l.first);
        else if (l.second.size() == 1) {
            int m = *l.second.begin();
            const string& n = c[m];
            string o = l.first;
            int p = 0;
            for (size_t q = 0; (q = n.find(o, q)) != string::npos; q++)
                p++, q++;
            if (p > 1)
                e.insert(o);
        }
    }

    vector<string> r;
    for (const string& s : e) {
        string t = s;
        if (next_permutation(t.begin(), t.end()))
            r.push_back(t);
        else
            r.push_back(s);
    }
    sort(r.begin(), r.end());

    for (size_t u = 0; u < r.size(); ++u) {
        if (u) cout << " ";
        cout << r[u];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string b;
    getline(cin, b);

    vector<string> c;
    stringstream d(b);
    string e;
    while (d >> e) {
        c.push_back(e);
    }

    a(n, c);

    return 0;
}
