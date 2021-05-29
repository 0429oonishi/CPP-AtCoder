//
//  ex12.cpp
//  CPP-practice
//
//  Created by 大西玲音 on 2021/05/29.
//

#include "include/bits/stdc++.h"
using namespace std;

//int main() {
//    string S;
//    cin >> S;
//    int plusCount = 0;
//    int minusCount = 0;
//    for (int i = 1; i < S.size(); i += 2) {
//        if (S.at(i) == '+') {
//            plusCount++;
//        }
//        else if (S.at(i) == '-') {
//            minusCount++;
//        }
//    }
//    cout << (plusCount - minusCount + 1) << endl;
//}

//別解(AtCoderの解答)
//int main() {
//    string S;
//    cin >> S;
//    int answer = 1;
//    for (int i = 0; i < S.size(); i++) {
//        if (S.at(i) == '+') {
//            answer++;
//        }
//        if (S.at(i) == '-') {
//            answer--;
//        }
//    }
//    cout << answer << endl;
//}
