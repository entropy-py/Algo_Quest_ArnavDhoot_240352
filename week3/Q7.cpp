int Solution::findCount(const vector<int> &A, int B) {
    int n=A.size();
    // Find first occurrence
    int low = 0, high = n - 1, first = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (A[mid] == B) {
            first = mid;
            high = mid - 1;  // keep searching in left half
        } else if (A[mid] < B) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // If not found
    if (first == -1) return 0;

    // Find last occurrence
    low = 0, high = n - 1;
    int last = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (A[mid] == B) {
            last = mid;
            low = mid + 1;  // keep searching in right half
        } else if (A[mid] < B) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return last - first + 1;
}

