#include<iostream>
#include<vector>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        long long x, y;
        int sum = 0;
        cin >> n >> m >> x >> y;

        vector<long long>h(n);
        vector <long long>v(m);

        for(int i = 0; i < n; i++) {
            cin >> h[i];
        }
        for(int i = 0; i < m; i++) {
            cin >> v[i];
        }
        int l = 0;
        for(int i = 0; i < n; i++) {
            if(h[i] < y){
                l++;
            } else {
                break;
            }
        }
        int j = 0;
        for(int i = 0; i < m; i++) {
            if(v[i] < x) {
                j++;
            } else {
                break;
            }
        }

        sum = l + j;

        cout << sum << endl;
    }
}