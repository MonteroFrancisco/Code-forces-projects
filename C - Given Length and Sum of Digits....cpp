#include <iostream>
#include <string>
using namespace std;
bool can(int m, int s) {
    return s >= 0 && s <= 9 * m;
}
string generateSmallestNumber(int m, int s) {
    if (!can(m, s)) 
        return "-1";
    string minn = "";
    bool leadingZero = true; 
    for (int i = 0; i < m; i++) {
        for (int d = leadingZero ? 1 : 0; d < 10; d++) {
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, s - d)) {
                minn += char('0' + d);
                s -= d;
                leadingZero = false; 
                break;
            }
        }
    }
    return minn.empty() ? "-1" : minn; 
}
string generateGreatestNumber(int m, int s) {
    if (!can(m, s)) 
        return "-1";
    
    string maxn = "";
    for (int i = 0; i < m; i++) {
        for (int d = 9; d >= 0; d--) {
            if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, s - d)) {
                maxn += char('0' + d);
                s -= d;
                break;
            }
        }
    }
    return maxn;
}
 
int main() {
    int m, s;
    cin >> m >> s;
 
    if (m == 1 && s == 0) {
        cout << "0 0" << endl;
        return 0; 
    }
 
    string smallest = generateSmallestNumber(m, s);
    string greatest = generateGreatestNumber(m, s);
    
    if (smallest == "-1" || greatest == "-1") {
        cout << "-1 -1" << endl;
    } else {
        cout << smallest << " " << greatest << endl;
    }
 
    return 0;
}
