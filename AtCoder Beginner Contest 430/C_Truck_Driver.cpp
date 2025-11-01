/*
People change, and as the years go by, so do our environments. 
I think it's alright for there not to be a "proper" way of living. 
But I do believe that instead of trying to be satisfied on just one answer and 
blocking out the rest, searching for more answers, 
despite the pain they may bring, is a much more honest way of living.
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    string s;
    cin >> n >> a >> b;
    cin >> s;

    vector<int> pa(n + 1, 0);
    vector<int> pb(n + 1, 0);

    for(int i = 0; i < n; i++) {
        pa[i+1] = pa[i] + (s[i] == 'a');
        pb[i+1] = pb[i] + (s[i] == 'b');
    }

    auto count_a = [&](int l, int r) {
        return pa[r+1] - pa[l];
    };
    
    auto count_b = [&](int l, int r) {
        return pb[r+1] - pb[l];
    };

    long long total_count = 0;
    
    int r_start = 0;
    int r_end = 0;
    
    for(int l = 0; l < n; l++) {
        
        r_start = max(l, r_start); 
        while(r_start < n && count_a(l, r_start) < a) {
            r_start++;
        }
        
        if(r_start == n) {
            break; 
        }

        r_end = max(l, r_end);
        r_end = max(r_start, r_end); 

        while(r_end < n && count_b(l, r_end) < b) {
            r_end++;
        }
        
        total_count += (r_end - r_start);
    }

    cout << total_count << endl;

    return 0;
}