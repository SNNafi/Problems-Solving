//
// Created by Shahriar Nasim Nafi on 10/1/22.
//
// Problem: https://codeforces.com/contest/1624/problem/A
//

#include <iostream>
#include <vector>

using namespace std;

void isort(vector<int> &nums, int n) {
    for (int i = 1; i < n; i++) {
        int value = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > value) {
            nums[j + 1] = nums[j];
            j -= 1;
        }
        nums[j + 1] = value;
    }
}

int process(vector<int> &nums, int n, int biggest) {
    int count = 0;
    int allequal;
    isort(nums, n);

    while (true) {
        allequal = true;
        for (int i = 0; (nums[i] < biggest); i++) {
            nums[i] = nums[i] + 1;
            allequal = false;
            goto tail;
        }
        tail:
        if (allequal) {
            break;
        } else {
            count++;
        }
    }
    return count;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int testCase;

    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int n;
        int num;
        int biggest = 0;
        vector<int> nums;
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> num;
            if (biggest < num) {
                biggest = num;
            }
            nums.push_back(num);
        }
        cout << process(nums, n, biggest) << "\n";
    }

}