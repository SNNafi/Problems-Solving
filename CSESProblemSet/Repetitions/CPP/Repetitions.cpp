//
// Created by Shahriar Nasim Nafi on 4/1/22.
//
// Problem: https://cses.fi/problemset/task/1069
//

#include <iostream>
#include <unordered_set>

using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    typedef long long ll;
    string s;
    char lastFound = 0;
    ll count = 0;
    ll previousResult = 0;
    ll result = 0;
    getline(cin, s);
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == lastFound) {
            count++;
            result = count + 1;
            if (previousResult < result) previousResult = result;
        } else {
            result = count + 1;
            count = 0;
            if (previousResult < result) previousResult = result;

        }
        lastFound = s[i];
    }
    if (previousResult > result) {
        cout << previousResult << "\n";
        return 0;
    }
    cout << result << "\n";

}