#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
ll ans(ll n, ll k) {
    if (k == 0 || k == n) return 1;
    else return ans(n - 1, k - 1) + ans(n - 1, k);
}

int main() {
    ll n, k; cin >> n >> k;
    cout << ans(n, k);
    return 0;
}