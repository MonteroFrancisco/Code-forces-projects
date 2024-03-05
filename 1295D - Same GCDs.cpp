#include <bits/stdc++.h>
using namespace std;
//maximo comun divisor 
long long gcd(long long a, long long b) {
    return a == 0 ? b : gcd(b % a, a);
}


//Eulers totient function
long long phi(long long a) {
    long long tmp = a, ans = a;
    long long d = 2;
    while (d * d <= tmp) {
        long long cnt = 0;
        while (tmp % d == 0) {
            tmp /= d;
            cnt++;
        }
        if (cnt > 0) ans -= ans / d;
        d++;
    }
    if (tmp > 1) ans -= ans / tmp;
    return ans;
}

int main() {
    int t;
    cin >> t;
    for (int tc = 1; tc <= t; tc++) {
        long long a, m;
        cin >> a >> m;
        cout << phi(m / gcd(a, m)) << endl;
    }
    return 0;
}
