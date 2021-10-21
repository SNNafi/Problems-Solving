//
// Created by Shahriar Nasim Nafi on 20/10/21.
//
// Problem: https://dmoj.ca/problem/a1

#include <iostream>
#include <string>

using namespace std;

struct Word {
    int n;
    string word;

    string perform() {

        word.erase(word.begin() + n);
        return word;

    }

};

int main() {

    Word words[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        Word word;
        cin >> word.n;
        getline(cin, word.word);
        words[i] = word;
    }
    for (int i = 0; i < n; i++) {
        Word *word = &words[i];
        cout << i + 1 << word->perform() << endl;
    }
}