#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, pm, sg;
    int n = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> s;
        int u = s.length();
        int m = u / 2;
        pm = s.substr(0, m);
        sg = s.substr(m);
        if (u % 2 == 0 && pm == sg) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
