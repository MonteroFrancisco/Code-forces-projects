#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 0;
    int a = 0;
    int d = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < s.length(); j++) {
            char ko = s[j];
            if(ko == 'A') {
                a++;
            } 
            else if(ko == 'D') {
                d++;
            }
        } }

    if(a > d) {
        cout << "Anton";
    } else if(d > a) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }

    return 0;
}
