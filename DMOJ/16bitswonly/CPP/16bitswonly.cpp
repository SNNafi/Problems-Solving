//
// Created by Shahriar Nasim Nafi on 20/10/21.
//
// Problem: https://dmoj.ca/problem/16bitswonly

#include <iostream>


using namespace std;

struct BIT {
    unsigned long long a;
    unsigned long long b;
    unsigned long long p;

    string check() {
        if (p == a * b) {
            return "POSSIBLE DOUBLE SIGMA";
        }
        return "16 BIT S/W ONLY";
    }
};

int main() {

    BIT bits[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        BIT bit;
        cin >> bit.a >> bit.b >> bit.p;
        bits[i] = bit;
    }
    for (int i = 0; i < n; i++) {
        BIT bit = bits[i];
        cout << bit.check() << endl;
    }
}