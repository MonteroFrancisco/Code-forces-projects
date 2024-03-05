#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void so() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; ++i) {
        cin >> ar[i];
    }

    int count1 = 0, count2 = 0;
    for (int i = 0; i < n && ar[i] == ar[0]; ++i) {
        count1++;
    }
    for (int i = n - 1; i >= 0 && ar[i] == ar[n - 1]; --i) {
        count2++;
    }

    int res = n;
    if (ar[0] == ar[n - 1]) {
        res -= count1;
        res -= count2;
    } else {
        res -= max(count1, count2);
    }

    cout << max(0, res) << endl;
}

int main() {
    int y;
    cin >> y;
    while (y--) {
        so();
    }
    return 0;
}
