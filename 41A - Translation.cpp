#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    string ko, koo;
    for (int i = 0; i < s.length(); i++) {
        ko += s[i];
    }
    for (int n = t.length() - 1; n >= 0; --n) {
        koo += t[n];
    }

   
    if (ko == koo) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
