#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 1;

    for (int i = 1; i <= 10; i++) {
        ans = n * i;
        cout << ans << " ";
    }
    return 0;
}