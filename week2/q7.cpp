#include <bits/stdc++.h>
using namespace std;
int arr(vector<int>& A, int B) {
    int n = A.size();
    int left = 0, right = 0, sum = 0;
    int count = 0;

    for (right = 0; right < n; ++right) {
        sum += A[right];

        while (sum >= B && left <= right) {
            sum -= A[left++];
        }
        count += (right - left + 1);
    }

    return count;
}

int main() {
    vector<int> A = {1, 2, 3};  // Example
    int B = 5;

    cout << arr(A, B) << endl;

    return 0;
}
