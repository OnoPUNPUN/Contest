#include<iostream>
using namespace std;

int main () {
    int t;
    cin >> t;
    while(t--) {
        int s;
        cin >> s;
        int a[s], b[s];
        for(int i = 0; i < s; i++) {
            cin >> a[i];
        }

        for(int i = 0; i < s; i++) {
            cin >> b[i];
        }
        bool can = true;

        for(int i = 0; i < s; i++) {
            if(a[i] == 1 && b[i] == 0) {
                can = false;
                break;
            }
        }
        if(can) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}