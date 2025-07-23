#include <iostream>
#include <algorithm>
using namespace std;

struct rectangle {
    int x1, y1, x2, y2;
    rectangle() {}
    rectangle(int x1, int y1, int x2, int y2) {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    }
};
long long area(rectangle r) {
    return 1LL * (r.x2 - r.x1) * (r.y2 - r.y1);
}
long long getCommon(rectangle a, rectangle b) {
    int x_overlap = max(0, min(a.x2, b.x2) - max(a.x1, b.x1));
    int y_overlap = max(0, min(a.y2, b.y2) - max(a.y1, b.y1));
    return 1LL * x_overlap * y_overlap;
}
long long totalArea(int n, rectangle r[]) {
    long long A = 0;

    for (int i = 0; i < n; i++) {
        A += area(r[i]);
        for (int j = 0; j < i; j++) {
            A -= getCommon(r[i], r[j]);  
        }
    }

    return A;
}

int main() {
    int n;
    cin >> n;
    rectangle r[n];
    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        r[i] = rectangle(x1, y1, x2, y2);
    }

    cout << totalArea(n, r) << endl;
    return 0;
}
