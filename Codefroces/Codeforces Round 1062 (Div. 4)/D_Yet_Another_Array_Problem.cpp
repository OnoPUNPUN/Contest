/*
People change, and as the years go by, so do our environments. 
I think it's alright for there not to be a "proper" way of living. 
But I do believe that instead of trying to be satisfied on just one answer and blocking out the rest, 
searching for more answers, despite the pain they may bring, is a much more honest way of living
*/

#include<bits/stdc++.h>
using namespace std;

int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};

long long Done() {
    int n;

    cin >> n;

    vector<long long> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int p : primes) {
        bool isDiv = true;

        for(long long val : a) {
            if(val % p != 0) {
                isDiv = false;
                break;
            }
        }

        if(!isDiv) {
            return p;
        }
    }

    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        cout << Done() << endl;
    }

    return 0;
    
}