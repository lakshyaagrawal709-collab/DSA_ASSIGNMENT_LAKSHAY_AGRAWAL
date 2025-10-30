/*
 Problem: ATM2 - ATM Queue
 Platform: CodeChef
 Author: Lakshya Agrawal
 Approach: Simulate queue withdrawals.
           If ATM has enough balance, allow withdrawal and deduct.
           Else, print 0.
 Complexity: O(N)
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        for (int i = 0; i < N; ++i) {
            if (A[i] <= K) {
                cout << 1;
                K -= A[i];
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}
