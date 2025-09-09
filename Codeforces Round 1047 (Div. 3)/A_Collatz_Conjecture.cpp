#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;

  while(t--) {
    int k, x;

    cin >> k >> x;

    while(k-- > 0) {
      x = x * 2;
    }

    cout << x << endl;
  }

  return 0;
}