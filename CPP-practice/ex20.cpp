//
//  ex20.cpp
//  CPP-practice
//
//  Created by 大西玲音 on 2021/06/02.
//

#include "include/bits/stdc++.h"
using namespace std;

int sum_range(int a, int b) {
    if (a == b) {
        return a;
    }
    return sum_range(a, b-1) + b;
}


int array_sum_from_i(vector<int> &data, int i) {
    if (i == data.size()) {
        return 0;
    }
    int s = array_sum_from_i(data, i+1);
    return data.at(i) + s;
}

int array_sum(vector<int> &data) {
    return array_sum_from_i(data, 0);
}


bool has_divisor(int N, int i) {
    if (i == N) {
        return false;
    }
    if (N % i == 0) {
        return true;
    }
    return has_divisor(N, i+1);
}

bool is_prime(int N) {
    if (N == 1) {
        return false;
    }
    else if (N == 2) {
        return true;
    }
    else {
        return !has_divisor(N, 2);
    }
}


// 相互再帰
bool is_even(int);
bool is_odd(int);
bool is_even(int n) {
    if (n == 0) {
        return true;
    }
    return is_odd(n-1);
}

bool is_odd(int n) {
    if (n == 0) {
        return false;
    }
    return is_even(n-1);
}

int main() {
    
}

