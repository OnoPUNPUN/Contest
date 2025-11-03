#include<iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    if(input[2] == '8') {
        input[0] += 1;
        input[2] = '1';
    } else {
        input[2] += 1;
    }

    cout << input << endl;
}