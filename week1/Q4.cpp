#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
      cin >> t;
      while(t--){
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    int fr[2][100005] = {0};

    for (int i = 0; i < n; i++)
        fr[i % 2][a[i]]++;

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
        fr[i % 2][a[i]]--;

    bool ch = true;

    for (int i = 1; i <= 100000; i++) {
        for (int j = 0; j < 2; j++) {
            if (fr[j][i] > 0)
                ch = false;
        }
    }

    if (ch)
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
      };

    return 0;
}
