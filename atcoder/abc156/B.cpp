
#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

void findNumberOfDigits(long n, int base)
{
    int dig = (int)(floor( log(n) / log(base)) + 1);
    cout << dig;
}
int32_t main()
{
    int n;
    cin >> n;
    int base;
    cin >> base;

    findNumberOfDigits(n, base);
    return 0;
}

