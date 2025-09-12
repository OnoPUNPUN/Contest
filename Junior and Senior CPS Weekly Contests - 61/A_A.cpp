#include <iostream>

using namespace std;

int getNumber(int b, int g) {
    return g - b;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int b, g;
        cin >> b >> g;
        cout << getNumber(b, g) << endl;
    }
}