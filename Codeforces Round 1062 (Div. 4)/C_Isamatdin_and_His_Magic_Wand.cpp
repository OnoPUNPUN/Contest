/*
I'm not some pure heart chasing after dreams. 
I know how difficult it is to live an ordinary life, 
having to overlook each other's shortcomings.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Separate even and odd numbers while preserving their order
        vector<int> even, odd;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                even.push_back(a[i]);
            } else {
                odd.push_back(a[i]);
            }
        }
        
        // Merge the two sequences to get lexicographically smallest
        vector<int> result;
        int i = 0, j = 0;
        
        while (i < even.size() && j < odd.size()) {
            if (even[i] < odd[j]) {
                result.push_back(even[i]);
                i++;
            } else {
                result.push_back(odd[j]);
                j++;
            }
        }
        
        // Add remaining elements
        while (i < even.size()) {
            result.push_back(even[i]);
            i++;
        }
        
        while (j < odd.size()) {
            result.push_back(odd[j]);
            j++;
        }
        
        // Output the result
        for (int k = 0; k < n; k++) {
            if (k > 0) cout << " ";
            cout << result[k];
        }
        cout << "\n";
    }
    
    return 0;
}