//
//  ex19.cpp
//  CPP-practice
//
//  Created by 大西玲音 on 2021/06/02.
//

#include "include/bits/stdc++.h"
using namespace std;
//
//void saiten(vector<vector<int>> &A, int &correct_count, int &wrong_count) {
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++) {
//            if (A.at(i).at(j) != (i + 1) * (j + 1)) {
//                A.at(i).at(j) = (i + 1) * (j + 1);
//                wrong_count++;
//            }
//            else {
//                correct_count++;
//            }
//        }
//    }
//}
//
//int main() {
//    vector<vector<int>> A(9, vector<int>(9));
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++) {
//            cin >> A.at(i).at(j);
//        }
//    }
//    int correct_count = 0;
//    int wrong_count = 0;
//    saiten(A, correct_count, wrong_count);
//    for (int i = 0; i < 9; i++) {
//        for (int j = 0; j < 9; j++) {
//            cout << A.at(i).at(j);
//            if (j < 8) cout << " ";
//            else cout << endl;
//        }
//    }
//    cout << correct_count << endl;
//    cout << wrong_count << endl;
//}
