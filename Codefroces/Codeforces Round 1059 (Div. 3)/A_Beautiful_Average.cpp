#include<iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--)
    {
        int max = INT_MIN;
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++) {
            if(max <= arr[i]){
                max = arr[i];
            }
        }
        cout << max << endl;
    }
    
}