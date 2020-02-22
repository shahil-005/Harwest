//shahil_005
//Some basic pre-written functions might have been copied from www.geeksforgeeks.org or cp-algorithms.com//

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define int long long
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int N = 1e5 + 5;
const long long MOD=(long long)(1e9+7);
const long long INIT=(long long)(1e6+1);

int32_t main()
{
    int n;
    cin >> n;
    int a[n+1];
    a[0] = 0;
    for(int i=1;i<=n;i++)
    {
        cin>> a[i];
    }
    int b[n+1];
    b[0] =0;
    for(int i=1;i<=n;i++)
    {
        b[i] = a[i];
    }

    sort(b,b+n+1);

    int x = b[1];
    int y = b[n];
    int ans=INT_MAX;
    int k=x;
    while(k<y+1)
    {
        int sum=0;
        int p = 1;
        while(p<n+1)
        {
            int i = b[p];
            sum+= pow(abs(i-k),2);
            p++;
        }


        //cout << sum << endl;
        if(sum < ans)
        {
            ans = sum;
        }
        k++;
    }

    cout << ans;
    return 0;
}

