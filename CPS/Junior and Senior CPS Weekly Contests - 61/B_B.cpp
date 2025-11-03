#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        string u;
        cin >> n >> u;
        string newString = "";
        int i = 0;
        while(i < n) {
            char c = u[i];
            int occur = 0;
            while(i < n && u[i] == c) {
                occur++;
                i++;
            }
            if(occur % 2 == 1) {
                newString += c;
            } else {
                newString += c; //aabbbbb
                newString += c;
            }
        }
        cout << newString << endl;
    }
    return 0;
}